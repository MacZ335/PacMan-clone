#include "Duch.h"

Duch::Duch(Map* map) : map(map)
{
}

Duch::~Duch()
{
}


bool Duch::Colison(Pacman* pacman)
{
    Vector2 pacmanPosition = pacman->GetPosition();

    if ((position.x / cellSize == pacmanPosition.x / cellSize) && (position.y / cellSize == pacmanPosition.y / cellSize))
    {
        return true;
    }
    else
    {
        return false;
    }
}