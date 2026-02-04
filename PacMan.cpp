#include "PacMan.h"
#include "Map.h"


Pacman::Pacman()
{
    position.x = 160;
    position.y = 120;
    rotation = 0.0f;
}


Pacman::~Pacman()
{
}


bool Pacman::CanMoveTo(Vector2 newPosition, Map* map)
{
    int gridX = newPosition.x / cellSize;
    int gridY = newPosition.y / cellSize;
    if (gridX < 0 || gridY < 0 || gridX >= cellCount || gridY >= cellCount)
        return false;
    return map->GetCell(gridX, gridY) != 1;
}


void Pacman::CanMoveLeft(Map* map)
{
    Vector2 newPosition = { position.x - 40, position.y };
    if (CanMoveTo(newPosition, map))
    {
        MoveLeft();
    }
    rotation = 270.0f;
}


void Pacman::CanMoveRight(Map* map)
{
    Vector2 newPosition = { position.x + 40, position.y };
    if (CanMoveTo(newPosition, map))
    {
        MoveRight();
    }
    rotation = 90.0f;
}


void Pacman::CanMoveUp(Map* map)
{
    Vector2 newPosition = { position.x, position.y - 40 };
    if (CanMoveTo(newPosition, map))
    {
        MoveUp();
    }
    rotation = 0.0f;
}


void Pacman::CanMoveDown(Map* map)
{
    Vector2 newPosition = { position.x, position.y + 40 };
    if (CanMoveTo(newPosition, map))
    {
        MoveDown();
    }
    rotation = 180.0f;
}
