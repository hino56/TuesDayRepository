#include"Enemy.h"
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<vector>
using namespace std;

int main(void)
{
	//乱数の初期化
	srand((unsigned int)time(NULL));

	vector<Enemy>enemies;

	for (int i = 0;i < 3;i++)
	{
		int hp = rand() % (Enemy::HP - Enemy::MIN_HP) + Enemy::MIN_HP;

		enemies.push_back(Enemy(hp));
	}

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "敵の数は" << enemies.size() << endl;

	return 0;
}