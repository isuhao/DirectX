#include "Level2.h"

#include <iostream>

Level2::Level2(std::shared_ptr<D3DGraphics> gfx, std::shared_ptr<GameEngine> game) : gfx(gfx), game(game)
{
	std::cout << "Level2 Constructor" << std::endl;
}

Level2::~Level2(void)
{
	std::cout << "Level2 Destructor" << std::endl;
}

void Level2::Init()
{
}

void Level2::Cleanup()
{
}

void Level2::Pause()
{
}

void Level2::Resume()
{
}

void Level2::Tick()
{
	if(game->keyboard->isPressed('s'))
	{
		game->PopState();
	}
}

void Level2::Draw()
{
	gfx->DrawRect(300, 300, 100, 100, 0xFF6464);
}
