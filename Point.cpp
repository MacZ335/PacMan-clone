#include "Point.h"

Point::Point(int type, Vector2 position)
{
	this -> type = type;
	this->position = position;

	switch(type)
	{
		case 1:
			image = LoadTexture("Graphics/Punkt_maly.png");
			break;
		case 2:
			image = LoadTexture("Graphics/Punkt_Duzy.png");
			break;
		default:
			image = LoadTexture("Graphics/Punkt_maly.png");
			break;
	}
}

void Point::Draw()
{
	DrawTextureV(image, position, WHITE);
}

int Point::GetType()
{
	return type;
}

