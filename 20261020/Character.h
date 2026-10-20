#pragma once
#include<iostream>
using namespace std;

class Character
{
public:
	int hp = 100;

	//共通の処理
	virtual void ShowStatus();
	//派生クラスに実装をする
	virtual void Attack() = 0;
};

