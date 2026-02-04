#include "MapDraw.h"

MapDraw::MapDraw()
{
    MapLoad mapLoader(&map[0]);
    wallTexture = LoadTexture("Graphics/sciana.png");
    pointTexture = LoadTexture("Graphics/Punkt_duzy.png");
}

MapDraw::~MapDraw()
{
    UnloadTexture(wallTexture);
    UnloadTexture(pointTexture);
}

void MapDraw::DrawMap()
{
    for (int y = 0; y < cellCount; y++)
    {
        for (int x = 0; x < cellCount; x++)
        {
            if (map[y][x] == 1)
            {
                DrawTexture(wallTexture, x * cellSize, y * cellSize, WHITE);
            }
        }
    }
}

void MapDraw::DrawPoints(const std::vector<Vector2>& points, int cellSize)
{
    for (const auto& point : points)
    {
        DrawTexture(pointTexture, point.x*cellSize, point.y * cellSize, WHITE);
    }
}
