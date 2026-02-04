#pragma once

#include "raylib.h"
#include "PacMan.h"
#include "LosowyDuch.h"
#include "ScigajacyDuch.h"
#include <vector>

/**
 * @class PostacDraw
 * @brief Klasa odpowiedzialna za rysowanie postaci w grze (Pacman i duchy).
 */
class PostacDraw
{
public:
    /**
     * @brief Konstruktor klasy PostacDraw. Laduje tekstury postaci.
     */
    PostacDraw();

    /**
     * @brief Destruktor klasy PostacDraw. Zwalnia tekstury postaci.
     */
    ~PostacDraw();

    /**
     * @brief Rysuje postac Pacmana.
     * @param pacman Referencja do obiektu klasy Pacman.
     */
    void DrawPacman(const Pacman& pacman) const;

    /**
     * @brief Rysuje duchy.
     * @param duchy Wektor zawierajacy wskazniki do obiektow klasy Duch.
     */
    void DrawDuchy(const std::vector<Duch*>& duchy) const;

private:
    Texture2D pacmanTexture; ///< Tekstura Pacmana.
    Texture2D losowyDuchTexture; ///< Tekstura losowego ducha.
    Texture2D scigajacyDuchTexture; ///< Tekstura scigajacego ducha.
};