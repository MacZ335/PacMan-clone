#include "Screen.h"
#include "raylib.h"

Screen::Screen ()
{
	WinScreen = LoadTexture("Graphics/win.png");
	LoseScreen = LoadTexture("Graphics/lose.png");
}

void Screen::Draw_Win()
{
	DrawTexture(WinScreen, 0, 0, WHITE);
}

void Screen::Draw_Lost()
{
	DrawTexture(LoseScreen, 0, 0, WHITE);
}

void Screen::MapDraw()
{
	MapD.DrawMap();
}

void Screen::DrawPoints(const std::vector<Vector2>& points)
{
	pointD.DrawPoints(points);
}

void Screen::DrawPostacie(const Pacman& pacman, const std::vector<Duch*>& duchy) const
{
	PostacD.DrawPacman(pacman);
	PostacD.DrawDuchy(duchy);
}