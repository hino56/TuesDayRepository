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

	//内容確認
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << " \n";

	//消去処理
	enemies.erase(enemies.begin() + 0);

	//消去後確認
	cout << "1体削除しました。\n";
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "敵の数は" << enemies.size() << endl;

	return 0;
}