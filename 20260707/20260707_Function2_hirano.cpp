#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_hirano.h"
using namespace std;

int main(void)
{
	int ary[3] = {};

	srand((unsigned int)time(NULL));

	for (int i = 0; i < 3; i++)
	{
			ary[i] = rand() % 9;
			cout << ary[i];
	}

	return 0;
}

void InputCheck()
{

}

