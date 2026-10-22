#pragma once
#include<string>

class Sorcerer
{
protected:
	int hp;
	int ce;
	std::string name;

public:
	//コンストラクタ
	Sorcerer(std::string name, int hp, int ce) :name(name), hp(hp), ce(ce)
	{
	}

	//仮想
	virtual void ShowStatus();

	//純粋
	virtual void SurgicalMethod() = 0;


	virtual ~Sorcerer() = default;
};

