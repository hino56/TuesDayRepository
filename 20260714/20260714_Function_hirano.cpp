#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_Header_hirano.h"
using namespace std;

void Game()
{
	//•Ï”
	int player[NUMBER];
	int cpu[NUMBER];
	int playerChoose=0;

	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));

	cout << "========== PLAYER GET NUMBER ==========\n";
	InputPlayer(player);
	cout << "\n";

	InputCheck();
	
	InputCpu(cpu);
}

void InputPlayer(int player[])
{

	for (int i = 0; i < NUMBER; i++)
	{
		player[i] = rand() % MAX;
		cout << "[" << player[i] << "]";
	}
	cout << "\n";
}

void InputCpu(int cpu[])
{

	for (int i = 0; i < NUMBER; i++)
	{
		cpu[i] = rand() % MAX;
		cout << "[" << cpu[i] << "]";
	}
}

void InputCheck()
{

	while (true)
	{
		int player[NUMBER] = {};
		
		cin >> player[NUMBER];
		
		if (player[NUMBER] > NUMBER || player[NUMBER] < MIN)
		{
			cout << "“ü—Í‚ÉŒë‚è‚ª‚ ‚è‚Ü‚·BÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
		}
		else
		{
			break;
		}
	}
}

void Judge(int &playerPoint,int &cpuPoint)
{
	int player[NUMBER] = {};
	int cpu[NUMBER] = {};

	if (player[NUMBER] - cpu[NUMBER] >= MIN)
	{
		cout << "PlayerWin\n";
		playerPoint++;
	}
	else
	{
		cout << "CpuWin\n";
		cpuPoint++;
	}
}
	