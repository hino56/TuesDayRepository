#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp)
{
	this->hp = hp;
}

Enemy::~Enemy() {}

void Enemy::ShowHp() const
{
	cout << "Enemy HP:" << hp << endl;
}

int Enemy::GetHp()const
{
	return hp;
}

void Enemy::Damage(int damage)
{
	hp -= damage;
}