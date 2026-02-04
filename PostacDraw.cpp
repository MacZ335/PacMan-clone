#include "PostacDraw.h"

PostacDraw::PostacDraw()
{
    pacmanTexture = LoadTexture("Graphics/pacman.png");
    losowyDuchTexture = LoadTexture("Graphics/duchlosowy.png");
    scigajacyDuchTexture = LoadTexture("Graphics/scigajacyduch.png");
}

PostacDraw::~PostacDraw()
{
    UnloadTexture(pacmanTexture);
    UnloadTexture(losowyDuchTexture);
    UnloadTexture(scigajacyDuchTexture);
}

void PostacDraw::DrawPacman(const Pacman& pacman) const
{
    Vector2 position = pacman.GetPosition();
    float rotation = pacman.GetRotation();
    Vector2 origin = { (float)pacmanTexture.width / 2, (float)pacmanTexture.height / 2 };

    DrawTexturePro(pacmanTexture, Rectangle{ 0, 0, (float)pacmanTexture.width, (float)pacmanTexture.height },
        Rectangle{ position.x + origin.x, position.y + origin.y, (float)pacmanTexture.width, (float)pacmanTexture.height },
        origin, rotation, WHITE);
}

void PostacDraw::DrawDuchy(const std::vector<Duch*>& duchy) const
{
    for (const Duch* duch : duchy)
    {
        Vector2 position = duch->GetPosition();
        float rotation = duch->GetRotation();
        Vector2 origin = { (float)losowyDuchTexture.width / 2, (float)losowyDuchTexture.height / 2 };
        Texture2D image;

        if (dynamic_cast<const LosowyDuch*>(duch))
        {
            image = losowyDuchTexture;
        }
        else if (dynamic_cast<const ScigajacyDuch*>(duch))
        {
            image = scigajacyDuchTexture;
        }

       
        DrawTexturePro(image, Rectangle{ 0, 0, (float)image.width, (float)image.height },
            Rectangle{ position.x + origin.x, position.y + origin.y, (float)image.width, (float)image.height },
            origin, rotation, WHITE);
    }
}