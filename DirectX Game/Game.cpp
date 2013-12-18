#include "Game.h"
#include "Level1.h"

Game::Game(HWND hwnd, const KeyboardServer& kServ, const MouseServer& mServ, const int width, const int height)
{
	gfx = std::make_shared<D3DGraphics>(hwnd, width, height);
	game = std::make_shared<GameEngine>(kServ, mServ, gfx);

	game->PushState(std::make_shared<Level1>(gfx, game));
}

Game::~Game(void)
{

}

void Game::Go()
{
	game->Go();
}
