#pragma once
class Enemy
{
private:
	int hp;

public:
	Enemy(int hp);
	~Enemy();

	void Damage(int damage);

	int GetHp() const;


	void ShowHp() const;

	//共通定数
	static const int HP = 100;
	static const int MIN_HP = 30;
	static const int DAMAGE = 90;
	static const int MIN_DAMAGE = 20;

};