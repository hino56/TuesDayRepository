#include"Enemy.h"
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	/*Enemy enemy1(100);
	Enemy enemy2(200);
	enemy1.ShowStatus();
	enemy2.ShowStatus();*/

	vector<Enemy>enemies;
	enemies.push_back(Enemy(100));
	enemies.push_back(Enemy(200));
	enemies.push_back(Enemy(300));
	enemies.push_back(Enemy(80));
	enemies.push_back(Enemy(250));

	//登録した内容を見てみよう
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}

	cout << "敵の数は" << enemies.size() << endl;

	return 0;
}