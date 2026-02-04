#include "PointsDraw.h"

PointsDraw::PointsDraw()
{
	pointTexture = LoadTexture("Graphics/Punkt_duzy.png");
}

PointsDraw::~PointsDraw()
{
	UnloadTexture(pointTexture);
}

void PointsDraw::DrawPoints(const std::vector<Vector2>& points)
{
    for (const auto& point : points)
    {
        DrawTexture(pointTexture, point.x * cellSize, point.y * cellSize, WHITE);
    }
}
