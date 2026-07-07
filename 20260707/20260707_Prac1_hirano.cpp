//10 個の数値を入力する。
//入力された数値を偶数（even）と奇数配列（odd）に分類して表示する。
//数字を入れる配列は関数にして配列を渡しましょう。

#include<iostream>
using namespace std;

//関数
const int INDEX = 10;
const int MAX = 100;
const int MIN = 0;

//関数プロトタイプ
void AddArray(int ary[], int size);
int InputCheck(int min, int max);


void AddArray(int ary[], int size)
{
	//変数
	int i;
	//10個数値を入力
	for (i = 0; i < size; i++)
	{
		//入力チェック関数を呼び出しする
		ary[i] = InputCheck(MIN, MAX);
	}

}

int InputCheck(int min, int max)
{
	int num;

	while (true)
	{
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。\n";
		}
		else
		{
			break;
		}
	}
	return num;
}

int main(void)
{
	//配列
	int arry[INDEX] = {};
	//配列に追加する
	cout << "10個の数値を入力する。\n";
	//配列へ入力する関数を呼び出します
	AddArray(arry, INDEX);
	//偶数と奇数でで振り分け
	cout << "偶数：" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2==0)
		{
			cout << arry[i] << "\n";
		}
	}
	cout << "奇数" << endl;
	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 != 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}
