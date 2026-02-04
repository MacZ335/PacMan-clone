#include "Postac.h"


void Postac::MoveLeft()
{
    position.x -= 40;
    if (position.x < 0)
        position.x = 0;
    rotation = 270.0f;
}


void Postac::MoveRight()
{
    position.x += 40;
    if (position.x > GetScreenWidth() - 40)
        position.x = GetScreenWidth() - 40;
    rotation = 90.0f;
}


void Postac::MoveUp()
{
    position.y -= 40;
    if (position.y < 0)
        position.y = 0;
    rotation = 0.0f;
}


void Postac::MoveDown()
{
    position.y += 40;
    if (position.y > GetScreenHeight() - 40)
        position.y = GetScreenHeight() - 40;
    rotation = 180.0f;
}


Vector2 Postac::GetPosition() const
{
    return position;
}


float Postac::GetRotation() const
{
    return rotation;
}