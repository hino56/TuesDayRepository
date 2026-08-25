#pragma once
class Example
{
public:
	//‚Á‚Ä‚¢‚éƒf[ƒ^
	int hp;
	int playerX, playerY;
	int attack;

	void Move();
	void Attack();
	void Damage(int damage);
	void ShowStatus();
};

Example example;


