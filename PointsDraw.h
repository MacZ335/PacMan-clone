#pragma once

#include "raylib.h"
#include <vector>
#include "PacMan.h"
#include "Globalne.h"
#include "MapLoad.h"

/**
 * @class PointsDraw
 * @brief Klasa odpowiedzialna za rysowanie punktow na mapie.
 */
class PointsDraw
{
public:
    /**
     * @brief Konstruktor klasy PointsDraw. Laduje teksture punktow.
     */
    PointsDraw();

    /**
     * @brief Destruktor klasy PointsDraw. Zwalnia teksture punktow.
     */
    ~PointsDraw();

    /**
     * @brief Rysuje punkty na mapie.
     * @param points Wektor zawierajacy pozycje punktow do narysowania.
     */
    void DrawPoints(const std::vector<Vector2>& points);

private:
    Texture2D pointTexture; ///< Tekstura punktu.
};