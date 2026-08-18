#include<iostream>

using namespace std;

void Damage(int *p)
{
	*p -= 20;
}

void Heal(int* p)
{
	*p += 30;
	
}


int main(void)
{
	int ply = 0;
	int enmy = 100;
	int hp = 100;

	cout << "1攻撃,0回復" << endl;
	cout << "========== Game Start ==========" << endl;
;
	while (true)
	{
		
		cout <<"プレイヤーHP：" << hp << endl;
		cout << "モンスターのHP：" << enmy << endl;
		cout << endl;
		cin >> ply;
		cout << endl;
		

		cout << "モンスターの攻撃‐20HP!" << endl;
		Damage(&hp);

		cout << hp << endl;
		if (ply == 0)
		{
			Heal(&hp);
			if (hp < 100)
			{
				hp = 100;
			}
		}
		else if (ply == 1)
		{
			enmy -= 20;
		}

		

		if (enmy <= 0)
		{
			cout << "モンスターを倒し無事勝利！！" << endl;
			break;
		}
		if (hp <= 0)
		{
			cout << "モンスターに倒され無事死亡！！" << endl;
			break;
		}
	}

	
	return 0;

}