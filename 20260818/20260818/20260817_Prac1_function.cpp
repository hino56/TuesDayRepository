#include <iostream>
using namespace std;

#include "20260817_Prac1_header.h"

//球種関数
void PitingType(int piting)
{

	//入力した数字を文字に変換
	switch (piting)
	{
	case 0:
		cout << "ストレートを投げました" << endl;
		break;
	case 1:
		cout << "カーブを投げました" << endl;
		break;
	case 2:
		cout << "スライダーを投げました" << endl;
		break;
	case 3:
		cout << "シンカーを投げました" << endl;
		break;

	}
}

//結果表示関数
void Result(int out)
{
	//アウトが3以上だった場合実行
	if (out >= 3)
	{
		cout << "PLAYER WINNER!!" << endl;
	}
	//アウトが3未満だった場合
	else
	{
		cout << "CPU WINNER!!" << endl;
	}
}