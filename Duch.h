#pragma once
#include "Postac.h"
#include "Map.h"

/**
 * @class Duch
 * @brief Klasa reprezentujaca ducha, dziedziczy po klasie Postac.
 */
class Duch : public Postac
{
protected:
    Map* map; ///< Wskaznik do mapy, na ktorej porusza siê duch.
public:
    /**
     * @brief Konstruktor klasy Duch.
     * @param map Wskaznik do mapy.
     */
    Duch(Map* map);

    /**
     * @brief Destruktor klasy Duch.
     */
    ~Duch();

    /**
     * @brief Metoda aktualizujaca stan ducha. Musi byæ zaimplementowana w klasach pochodnych.
     */
    virtual void Update() = 0;

    /**
     * @brief Sprawdza kolizje z Pacmanem.
     * @param pacman WskaŸnik do Pacmana.
     * @return true, jesli duch zderza sie z Pacmanem, false w przeciwnym razie.
     */
    bool Colison(Pacman* pacman);
};