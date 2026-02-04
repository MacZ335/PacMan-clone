#pragma once
#include "PacMan.h"
#include "Globalne.h"
#include "LosowyDuch.h"
#include "Points.h"
#include "Map.h"
#include "ScigajacyDuch.h"

#include <vector>

/**
 * @class Game
 * @brief Klasa reprezentujaca glowna logike gry.
 */
class Game
{
public:
    /**
     * @brief Konstruktor klasy Game.
     */
    Game();

    /**
     * @brief Destruktor klasy Game.
     */
    ~Game();

    /**
     * @brief Aktualizuje stan gry.
     */
    void Update();



    /**
     * @brief Sprawdza kolizje pomiedzy postaciami a obiektami na mapie.
     */
    void Colison();

    /**
     * @brief Obsluguje wejscia od uzytkownika.
     */
    void HandleInput();

    /**
     * @brief Sprawdza, czy gra zostala wygrana.
     * @return true, jesli gra zostala wygrana, false w przeciwnym razie.
     */
    bool GameWon();

    /**
     * @brief Sprawdza, czy gra zostala przegrana.
     * @return true, jesli gra zostala przegrana, false w przeciwnym razie.
     */
    bool GameLost();

    /**
     * @brief Zwraca wektor punktow do zebrania na mapie.
     * @return Referencja do wektora punktow.
     */
    std::vector<Vector2>& GetPoints();

    /**
     * @brief Zwraca referencje do obiektu Pacman.
     * @return Referencja do obiektu Pacman.
     */
    Pacman& GetPacman();

    /**
     * @brief Zwraca wektor wskaznikow do duchow w grze.
     * @return Referencja do wektora wskaznikow do duchow.
     */
    std::vector<Duch*>& GetDuchy();

private:
    Pacman pacman; ///< Obiekt reprezentujacy Pacmana.
    Map mapka; ///< Obiekt reprezentujacy mape gry.
    Points punkty; ///< Obiekt zarzadzajacy punktami na mapie.
    std::vector<Duch*> duchy; ///< Wektor wskaznikow do duchow w grze.
    bool gameWon; ///< Wartosc wskazujaca, czy gra zostala wygrana.
    bool gameLost; ///< Wartosc wskazujaca, czy gra zostala przegrana.
};

