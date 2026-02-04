#pragma once
#include "Duch.h"
#include <vector>

/**
 * @class ScigajacyDuch
 * @brief Klasa reprezentujaca scigajacego ducha w grze.
 */
class ScigajacyDuch : public Duch
{
public:
    /**
     * @brief Konstruktor klasy ScigajacyDuch. Inicjalizuje scigajacego ducha z mapa i celem.
     * @param map Wskaznik na obiekt klasy Map.
     * @param target Wskaznik na obiekt klasy Postac, ktory jest celem ducha.
     */
    ScigajacyDuch(Map* map, Postac* target);

    /**
     * @brief Destruktor klasy ScigajacyDuch.
     */
    ~ScigajacyDuch();

    /**
     * @brief Aktualizuje stan ducha, realizujac jego ruch w kierunku celu.
     */
    void Update() override;

private:
    Postac* target; ///< Wskaznik na obiekt klasy Postac, ktory jest celem ducha.

    /**
     * @brief Sprawdza, czy duch moze przesunac sie na nowa pozycje.
     * @param newPosition Nowa pozycja do sprawdzenia.
     * @return True, jesli duch moze przesunac sie na nowa pozycje, w przeciwnym razie False.
     */
    bool CanMoveTo(Vector2 newPosition);
};