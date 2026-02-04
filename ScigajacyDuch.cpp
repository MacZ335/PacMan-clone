#include "ScigajacyDuch.h"
#include <cmath>
#include <vector>

ScigajacyDuch::ScigajacyDuch(Map* map, Postac* target) : Duch(map), target(target)
{
    
    position.x = 120;
    position.y = 200;
    rotation = 0.0f;
}

ScigajacyDuch::~ScigajacyDuch()
{
}

void ScigajacyDuch::Update()
{

    Vector2 targetPosition = target->GetPosition();
    float deltaX = targetPosition.x - position.x;
    float deltaY = targetPosition.y - position.y;

    Vector2 directions[2];
    if (std::abs(deltaX) > std::abs(deltaY)) {
        if (deltaX > 0) {
            directions[0] = { position.x + 40, position.y }; 
        } else {
            directions[0] = { position.x - 40, position.y }; 
        }
        
        if (deltaY > 0) {
            directions[1] = { position.x, position.y + 40 }; 
        } else {
            directions[1] = { position.x, position.y - 40 }; 
        }
    } 
    else {
        if (deltaY > 0) {
            directions[0] = { position.x, position.y + 40 }; 
        } else {
            directions[0] = { position.x, position.y - 40 }; 
        }
        
        if (deltaX > 0) {
            directions[1] = { position.x + 40, position.y }; 
        } else {
            directions[1] = { position.x - 40, position.y }; 
        }
    }

    std::vector<int> availableDirections;
    for (int i = 0; i < 2; ++i)
    {
        if (CanMoveTo(directions[i]))
        {
            availableDirections.push_back(i);
            break;
        }
    }

    if (!availableDirections.empty())
    {
        
        int direction = availableDirections[0];

        switch (direction)
        {
        case 0:
            if (std::abs(deltaX) > std::abs(deltaY)) {
                if (deltaX > 0)
                    MoveRight();
                else
                    MoveLeft();
            } else {
                if (deltaY > 0)
                    MoveDown();
                else
                    MoveUp();
            }
            break;
        case 1:
            if (std::abs(deltaX) > std::abs(deltaY)) {
                if (deltaY > 0)
                    MoveDown();
                else
                    MoveUp();
            } else {
                if (deltaX > 0)
                    MoveRight();
                else
                    MoveLeft();
            }
            break;
        }
    }
}

bool ScigajacyDuch::CanMoveTo(Vector2 newPosition)
{
    int gridX = newPosition.x / cellSize;
    int gridY = newPosition.y / cellSize;
    if (gridX < 0 || gridY < 0 || gridX >= cellCount || gridY >= cellCount)
        return false;
    return map->GetCell(gridX, gridY) != 1;
}
