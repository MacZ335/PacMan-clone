#pragma once
#include "raylib.h"

/**
 * @brief Klasa reprezentujaca postac w grze.
 */
class Postac
{
protected:
    Vector2 position; ///< Pozycja postaci na ekranie.
    float rotation; ///< Kat rotacji postaci.

public:
    /**
     * @brief Przesuwa postac w lewo.
     */
    void MoveLeft();

    /**
     * @brief Przesuwa postac w prawo.
     */
    void MoveRight();

    /**
     * @brief Przesuwa postac do gory.
     */
    void MoveUp();

    /**
     * @brief Przesuwa postac w dol.
     */
    void MoveDown();

    /**
     * @brief Zwraca pozycje postaci.
     * @return Wektor 2D reprezentujacy aktualna pozycje postaci.
     */
    Vector2 GetPosition() const;

    /**
     * @brief Zwraca kat rotacji postaci.
     * @return Kat rotacji postaci w stopniach.
     */
    float GetRotation() const;
};