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
	cout << "攻撃を選択してください。\n";

	int chose;
	cin >> chose;

	int damage = rand() % (Enemy::DAMAGE - Enemy::MIN_DAMAGE) + Enemy::MIN_DAMAGE;
	cout << "ダメージ量:" << damage << endl;

	enemies[chose - 1].Damage(damage);

	cout << "残りHP:\n";

	int i = 0;
	for (Enemy& enemy : enemies)
	{
		if (enemies[i].GetHp() <= 0)
		{
			enemies.erase(enemies.begin() + i);
		}
		i++;
	}

	//消去後確認
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowHp();
	}

	cout << "敵の数は" << enemies.size() << endl;

	return 0;
}