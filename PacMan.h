#pragma once
#include "Postac.h"
#include "Map.h"

class Map;

/**
 * @brief Klasa reprezentujaca postac Pacman.
 */
class Pacman : public Postac
{
public:
    /**
     * @brief Konstruktor klasy Pacman.
     */
    Pacman();

    /**
     * @brief Destruktor klasy Pacman.
     */
    ~Pacman();

    /**
     * @brief Sprawdza, czy Pacman moze sie ruszyc do nowej pozycji.
     * @param newPosition Nowa pozycja.
     * @param map Wskaznik do mapy.
     * @return True, jesli ruch jest mozliwy, w przeciwnym razie false.
     */
    bool CanMoveTo(Vector2 newPosition, Map* map);

    /**
     * @brief Przesuwa Pacmana w lewo, jesli ruch jest mozliwy.
     * @param map Wskaznik do mapy.
     */
    void CanMoveLeft(Map* map);

    /**
     * @brief Przesuwa Pacmana w prawo, jesli ruch jest mozliwy.
     * @param map Wskaznik do mapy.
     */
    void CanMoveRight(Map* map);

    /**
     * @brief Przesuwa Pacmana do gory, jesli ruch jest mozliwy.
     * @param map Wskaznik do mapy.
     */
    void CanMoveUp(Map* map);

    /**
     * @brief Przesuwa Pacmana w dol, jesli ruch jest mozliwy.
     * @param map Wskaznik do mapy.
     */
    void CanMoveDown(Map* map);
};
