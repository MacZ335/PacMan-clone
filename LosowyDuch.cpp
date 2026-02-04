#include "LosowyDuch.h"

#include <cstdlib>
#include <ctime>
#include <vector>

LosowyDuch::LosowyDuch(Map* map) : Duch(map)
{
   
    position.x = 200;
    position.y = 200;
    rotation = 0.0f;
    srand(static_cast<unsigned>(time(0))); 
}

LosowyDuch::~LosowyDuch()
{
}

void LosowyDuch::Update()
{
    Vector2 directions[4] = {
        { position.x - 40, position.y }, 
        { position.x + 40, position.y }, 
        { position.x, position.y - 40 }, 
        { position.x, position.y + 40 } 
    };

    std::vector<int> availableDirections;

    for (int i = 0; i < 4; ++i)
    {
        if (CanMoveTo(directions[i]))
        {
            availableDirections.push_back(i);
        }
    }

    if (!availableDirections.empty())
    {
        int direction = availableDirections[rand() % availableDirections.size()];

        switch (direction)
        {
        case 0: MoveLeft(); break;
        case 1: MoveRight(); break;
        case 2: MoveUp(); break;
        case 3: MoveDown(); break;
        }
    }
}

bool LosowyDuch::CanMoveTo(Vector2 newPosition)
{
    int gridX = newPosition.x / cellSize;
    int gridY = newPosition.y / cellSize;
    if (gridX < 0 || gridY < 0 || gridX >= cellCount || gridY >= cellCount)
        return false;
    return map->GetCell(gridX, gridY) != 1;
}
