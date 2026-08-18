#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;     //入力範囲の最低値
const int PITING_MAX = 3;     //入力範囲の最大値
const int PROBABILITY = 4;    //確率
const int STRIKE_COUNT = 3;   //ストライクの最大カウント数
const int BALL_COUNT = 4;     //ボールの最大カウント数
const int OUT_COUNT = 3;      //アウトの最大カウント数
const int HIT_COUNT = 4;      //ヒットの最大カウント数


int main(void)
{
    //変数
    int ply, emy;    //プレイヤー、CPU
    int prod;        //確率
    int Strike = 0;  //ストライク
    int Ball = 0;    //ボール
    int Out = 0;     //アウト
    int Hit = 0;     //ヒット

    //乱数の初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //アウトカウントとヒットカウントが一定値を超えるまでループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;

        //入力判定
        while (true)
        {
            cin >> ply;

            //入力範囲を超えていた場合実行
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            //入力範囲だった場合ループの終了処理
            else
            {
                break;
            }
        }

        //球種関数
        PitingType(ply);

        //CPUのバッティング方向をランダム生成
        emy = rand() % PROBABILITY;

        //確率設定のためのランダム生成
        prod = rand() % PROBABILITY;

        //プレイヤーの入力数字とCPUのランダムな整数が異なる場合実行
        if (ply != emy)
        {
            //ランダムに生成された数字が0の場合実行
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;     //ボールカウントの増加
            }
            //ランダムに生成された数字が0以外の場合実行
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;   //ストライクカウントの増加
            }
        }

        //プレイヤーの入力数字とCPUのランダムな整数が同じ場合実行
        else
        {
            //変数の初期化
            Strike = 0;
            Ball = 0;

            //ランダムに生成された数字が1の場合実行
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;     //アウトカウントの増加
            }
            //ランダムに生成された数字が1以外の場合実行
            else
            {
                cout << "HIT!!" << endl;
                Hit++;     //ヒットカウントの増加
            }
        }

        //ストライクかボールが一定値を超えると実行
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクがカウント数を超えた場合
            if (Strike >= STRIKE_COUNT)
            {
                Out++;     //アウトカウントの増加
            }
            //ボールがカウント数を超えた場合実行
            else
            {
                Hit++;     //ヒットカウントの増加
            }

            //変数の初期化
            Strike = 0;
            Ball = 0;
        }

        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }

    //結果表示関数
    Result(Out);

    return 0;
}