#pragma once
class Enemy
{
private:
	int hp;

public:
	Enemy(int hp);
	~Enemy();

	void ShowStatus() const;
};