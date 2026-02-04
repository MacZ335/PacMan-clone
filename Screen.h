#pragma once
#include "raylib.h"
#include "MapDraw.h"
#include "PointsDraw.h"
#include "PostacDraw.h"
#include "Points.h"
#include "PacMan.h"

/**
 * @class Screen
 * @brief Klasa odpowiedzialna za rysowanie elementow ekranu gry, takich jak mapa, punkty, postacie oraz ekrany wygranej i przegranej.
 */
class Screen
{
private:
    Texture2D WinScreen; ///< Tekstura ekranu wygranej.
    Texture2D LoseScreen; ///< Tekstura ekranu przegranej.
    MapDraw MapD; ///< Obiekt odpowiedzialny za rysowanie mapy.
    PointsDraw pointD; ///< Obiekt odpowiedzialny za rysowanie punktow.
    PostacDraw PostacD; ///< Obiekt odpowiedzialny za rysowanie postaci.

public:
    /**
     * @brief Konstruktor klasy Screen. Laduje tekstury ekranu wygranej i przegranej.
     */
    Screen();

    /**
     * @brief Rysuje ekran wygranej.
     */
    void Draw_Win();

    /**
     * @brief Rysuje ekran przegranej.
     */
    void Draw_Lost();

    /**
     * @brief Rysuje mape.
     */
    void MapDraw();

    /**
     * @brief Rysuje punkty.
     * @param points Wektor zawierajacy pozycje punktow do narysowania.
     */
    void DrawPoints(const std::vector<Vector2>& points);

    /**
     * @brief Rysuje postacie (Pacman i duchy).
     * @param pacman Referencja do obiektu klasy Pacman.
     * @param duchy Wektor zawierajacy wskazniki do obiektow klasy Duch.
     */
    void DrawPostacie(const Pacman& pacman, const std::vector<Duch*>& duchy) const;
};