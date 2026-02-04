#pragma once

#include <vector>
#include <string>
#include <fstream>
#include <sstream>

/**
 * @class MapLoad
 * @brief Klasa odpowiedzialna za wczytywanie mapy z pliku.
 */
class MapLoad
{
public:
    /**
     * @brief Konstruktor klasy MapLoad.
     * @param map Wskaznik na tablice przechowujaca mape.
     */
    MapLoad(int(*map)[21]);

    /**
     * @brief Wczytuje mape z pliku tekstowego.
     */
    void LoadMapFromFile();

private:
    int(*map)[21]; ///< Wskaznik na tablice przechowujaca mape.
    const int cellCount = 21; ///< Liczba komorek w jednej kolumnie/wierszu mapy.
};