#include<iostream>
#include<cstdlib>
#include<ctime>
#include"QuesionHeader_hirano.h"
using namespace std;

//数字を文字に置き換えるための関数
void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}

//main終了時の結果を表示する関数
void Result(int out)
{
    //アウト回数が一定数を超えていると入る
    if (out >= OUT_COUNT)
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    //playerWinが表示される条件に合わなかった場合入る(cpuの勝利を表示させるため)
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}

//playerが誤った数字を入力した際に再度数字を入力させるための関数
int InputCheck(int min, int max)
{
    //変数宣言
    int player;

    //playerが正しい数字を入力までループさせる
    while (true)
    {
        //入力
        cin >> player;

        //playerが入力値を超えている、下回っている時に入る
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        //playerが正しい値を入力したときループを終了させる
        else
        {
            break;
        }
    }

    //playerの入力した数字の値を他の関数でも使用できるようにする
    return player;
}