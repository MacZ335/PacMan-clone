#include "Game.h"

Game::Game()
{
	duchy.push_back(new LosowyDuch(&mapka));
	duchy.push_back(new ScigajacyDuch(&mapka, &pacman));
	duchy.push_back(new LosowyDuch(&mapka));
	duchy.push_back(new LosowyDuch(&mapka));
	duchy.push_back(new LosowyDuch(&mapka));
	duchy.push_back(new LosowyDuch(&mapka));
}

Game::~Game()
{

}


void Game::HandleInput()
{
	if (gameWon||gameLost)
		return;
	if (IsKeyPressed(KEY_LEFT))
	{
		pacman.CanMoveLeft(&mapka);
	}else if(IsKeyPressed(KEY_RIGHT))
	{
		pacman.CanMoveRight(&mapka);
	}else if(IsKeyPressed(KEY_UP))
	{
		pacman.CanMoveUp(&mapka);
	}else if(IsKeyPressed(KEY_DOWN))
	{
		pacman.CanMoveDown(&mapka);
	}

}

bool Game::GameWon()
{
	if (gameWon)
		return true;
	return false;
}

bool Game::GameLost()
{
	if(gameLost)
		return true;
	return false;
}


void Game::Update()
{

	if (gameWon||gameLost)
	{
		return;
	}else
	for (Duch* duch : duchy)
	{
		duch->Update();
	}
	punkty.CollectPoint(&pacman);

	
}


void Game::Colison()
{
	if (punkty.AreAllPointsCollected())
	{
		gameWon = true;
	}
	
	for (Duch* duch : duchy)
	{
		if (duch->Colison(&pacman))
		{
			gameLost = true;
			break;
		}
	}
}

std::vector<Vector2>& Game::GetPoints() 
{
	return punkty.GetPoints();
}

Pacman& Game::GetPacman()
{
	return pacman;
}

std::vector<Duch*>& Game::GetDuchy()
{
	return duchy;
}