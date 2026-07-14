#include <iostream>
#include <cstdlib>
#include <ctime>
#include "QuesionHeader_hirano.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player;
    int cpu;
    int probability;

    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;

    //乱数の初期化
    srand((unsigned int)time(nullptr));

    //ルール説明
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //whileの条件に当てはまらない場合当てはまるまでループする
    do
    {
        //改行、球種説明
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        //playerにInputCheckの値を持たせる
        player = InputCheck(PITCHING_MIN, PITCHING_MAX);

        //playerの入力した数字を言葉に置き換える
        PitchingType(player);

        //cpuの球種の生成
        cpu = rand() % PROBABILITY;

        //playerの投げた球がストライクかボールになる確率生成
        probability = rand() % PROBABILITY;

        //playerとcpuの値が違うときにだけ入る
        if (player != cpu)
        {
            //playerの投げた球が1/4(25%)でボールになる
            if (probability == 0)
            {
                cout << "ボール！" << endl;
                //  ボール回数の加算
                ball++;
            }
            //playerの投げた球がボールにならなかったら入る
            else
            {
                cout << "ストライク！！" << endl;
                //ストライク回数の加算
                strike++;
            }
        }
        //playerとcpuの値が同じ時に入る
        else
        {
            //ストライクとボールは人が変わるごとに新しくなるので、これまで加算されたカウントを初期化する
            strike = 0;
            ball = 0;

            //probabilityが1の時に入る(25%)
            if (probability == 1)
            {
                cout << "OUT!!" << endl;
                //アウトの加算
                out++;
            }
            //probabilityが1以外の時に入る
            else
            {
                cout << "HIT!!" << endl;
                //ヒットの加算
                hit++;
            }
        }

        //ストライク、ボールのどちらかが一定の数を超えたら入る
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            //ストライクが一定数を超えていた場合に入る
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                //アウトの加算
                out++;
            }
            //ストライクが超えていない場合に入る
            else
            {
                cout << "フォアボール！" << endl;
                //ヒットの加算
                hit++;
            }

            //ストライクとボールは人が変わるごとに新しくなるので、これまで加算されたカウントを初期化する
            strike = 0;
            ball = 0;
        }

        //改行
        cout << endl;
        //ボール、ストライク、アウト、出塁している数をそれぞれ表示
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

        //whileの条件に当てはまっていた場合doを終了させてwhileに入る
    } while (out < OUT_COUNT && hit < HIT_COUNT);

    //結果の表示
    Result(out);

    //これまでの値をすべて0に戻して終了
    return 0;
}