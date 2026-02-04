#include "Points.h"

Points::Points()
{
	MapLoad mapLoader(&map[0]);
    InitializePoints();
}

void Points::InitializePoints()
{
    for (int y = 0; y < cellCount; y++)
    {
        for (int x = 0; x < cellCount; x++)
        {
            if (map[y][x] == 2)
            {
                points.push_back(Vector2{ static_cast<float>(x),static_cast<float>(y) });
            }
        }
    }
}

void Points::CollectPoint(Pacman* pacman)
{
    Vector2 pacmanPosition = pacman->GetPosition();
    for (auto i = points.begin(); i != points.end(); ++i)
    {

        if (i->x == pacmanPosition.x / cellSize && i->y == pacmanPosition.y / cellSize)
        {
            points.erase(i);
            break;
        }
    }
}

bool Points::AreAllPointsCollected()
{
    return points.empty();
}

std::vector<Vector2>& Points::GetPoints()
{
    return points;
}