#include<cstdlib>
#include<ctime>
#include"Game.h"

int main(void)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	//ゲームの初期化
	Game game;

	//ゲームの初期化
	game.Start();
	return 0;
}