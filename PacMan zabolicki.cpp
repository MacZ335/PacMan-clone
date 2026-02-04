/**

*@file Pacman zabolicki.cpp
*@brief Plik zrodlowy programu.
*/

/**

*@mainpage
*\par Pacman
*Po włączeniu programu włącza się okno gry wyświetlająca mapę do gry. 
*Na mapie pojawiają się dwa typy przeciwników. Duchu poruszające się losowo oraz duchy śledzące przeciwnika.
*Na mapie pojawiają się punkty które gracz ma za zadanie zebrać w celu wygrania gry. 
*Zebranie wszystkich punktów skutkuje zakończeniem gry oraz wyświetlenia komunikatu o zwycięstwie. 
*Przy złapaniu gracza przez ducha gra kończy się i wyświetla się komunikat o porażce.
*Poruszanie się gracza wywoływane jest naciskaniem przycisków strzałek na klawiaturze.
*@author Maciej Żabolicki
*@date 2024 - 06
*
*
*@par Kontakt :
*email: 01171794@pw.edu.pl
*/

#include "Game.h"

#include <cstdlib>
#include "Screen.h"



int main()
{
    Color grey = { 29, 29, 27, 255 };
    int widndowWidth = cellSize * cellCount;
    int widndowHeight = cellSize * cellCount;


    InitWindow(cellSize*cellCount, cellSize * cellCount, "Pac Man");
    SetTargetFPS(60);

    Game gra;

    
    Screen ekran;

    int time=0;
    while (WindowShouldClose() == false)
    {
        time++;
        gra.HandleInput();
        if (time >= 30)
        {
            gra.Update();
            time = 0;
        }
        gra.Colison();
        BeginDrawing();
        ClearBackground(grey);
        ekran.MapDraw();
        ekran.DrawPoints(gra.GetPoints());
        ekran.DrawPostacie(gra.GetPacman(), gra.GetDuchy());
        
        if (gra.GameWon())
        {
            ekran.Draw_Win();
        }
        if (gra.GameLost())
        {
            ekran.Draw_Lost();
        }

        EndDrawing();

    }
    CloseWindow();
    
}
