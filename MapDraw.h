#pragma once
#include "raylib.h"
#include "Globalne.h"
#include <vector>
#include "MapLoad.h"

/**
 * @class MapDraw
 * @brief Klasa odpowiedzialna za rysowanie mapy i punktow na ekranie.
 */
class MapDraw
{
private:
    Texture2D wallTexture; ///< Tekstura sciany.
    Texture2D pointTexture; ///< Tekstura punktu.
    int map[21][21]; ///< Tablica reprezentujaca mape.

public:
    /**
     * @brief Konstruktor klasy MapDraw.
     */
    MapDraw();

    /**
     * @brief Destruktor klasy MapDraw.
     */
    ~MapDraw();

    /**
     * @brief Rysuje mape na ekranie.
     */
    void DrawMap();

    /**
     * @brief Rysuje punkty na ekranie.
     * @param points Wektor punktow do narysowania.
     * @param cellSize Rozmiar pojedynczej komorki.
     */
    void DrawPoints(const std::vector<Vector2>& points, int cellSize);
};