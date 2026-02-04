#pragma once
#include "Duch.h"
#include <vector>

/**
 * @class LosowyDuch
 * @brief Klasa reprezentujaca ducha poruszajacego sie losowo.
 */
class LosowyDuch : public Duch
{
public:
    /**
     * @brief Konstruktor klasy LosowyDuch.
     * @param map Wskaznik na mape gry.
     */
    LosowyDuch(Map* map);

    /**
     * @brief Destruktor klasy LosowyDuch.
     */
    ~LosowyDuch();

    /**
     * @brief Aktualizuje stan ducha.
     */
    void Update() override;

private:
    /**
     * @brief Sprawdza, czy duch moze poruszyc sie do nowej pozycji.
     * @param newPosition Nowa pozycja do sprawdzenia.
     * @return true, jesli duch moze sie tam poruszyc, false w przeciwnym razie.
     */
    bool CanMoveTo(Vector2 newPosition);
};