#pragma once

#include "MapLoad.h"
#include "PacMan.h"
#include "Globalne.h"
#include <vector>
#include <string>

/**
 * @class Points
 * @brief Klasa odpowiedzialna za zarzadzanie punktami na mapie.
 */
class Points
{
public:
    /**
     * @brief Konstruktor klasy Points. Inicjalizuje punkty na mapie.
     */
    Points();

    /**
     * @brief Zbiera punkt, jesli Pacman znajduje sie na jego pozycji.
     * @param pacman Wskaznik na obiekt klasy Pacman.
     */
    void CollectPoint(Pacman* pacman);

    /**
     * @brief Sprawdza, czy wszystkie punkty zostaly zebrane.
     * @return True, jesli wszystkie punkty zostaly zebrane, w przeciwnym razie False.
     */
    bool AreAllPointsCollected();

    /**
     * @brief Zwraca referencje do wektora punktow.
     * @return Referencja do wektora punktow.
     */
    std::vector<Vector2>& GetPoints();

private:
    int map[21][21]; ///< Tablica przechowujaca mape.
    std::vector<Vector2> points; ///< Wektor przechowujacy pozycje punktow.

    /**
     * @brief Inicjalizuje punkty na mapie.
     */
    void InitializePoints();
};