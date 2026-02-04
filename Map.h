
#pragma once

#include "MapDraw.h"
#include "MapLoad.h"
#include "PacMan.h"
#include "Globalne.h"
#include <vector>
#include <string>

/**
 * @class Map
 * @brief Klasa reprezentujaca mape gry.
 */
class Map
{
public:
    /**
     * @brief Konstruktor klasy Map.
     */
    Map();

    /**
     * @brief Destruktor klasy Map.
     */
    ~Map();

    /**
     * @brief Pobiera wartosc komorki na mapie w okreslonym miejscu.
     * @param x Wspolrzedna x komorki.
     * @param y Wspolrzedna y komorki.
     * @return Wartosc komorki na mapie.
     */
    int GetCell(int x, int y);

private:
    int map[21][21]; ///< Tablica reprezentujaca mape.
    std::vector<Vector2> points; ///< Wektor punktow na mapie.
};