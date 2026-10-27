#pragma once
class Enemy
{
private:
	int hp;

public:
	Enemy(int hp);
	~Enemy();

	void ShowHp() const;

	//共通定数
	static const int HP = 100;
	static const int MIN_HP = 30;
};

