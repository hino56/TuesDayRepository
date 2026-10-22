#include"Gojo.h"
#include"Inumaki.h"
#include"Megumi.h"
#include<iostream>
using namespace std;

int main(void)
{
	Gojo gojo;
	Inumaki inumaki;
	Megumi megumi;

	/*Sorcerer* sorcerer = &gojo;
	Sorcerer* sorcerer = &inumaki;
	Sorcerer* sorcerer = &megumi;*/

	Sorcerer* sorcerer[3] = {
		&megumi,
		&inumaki,
		&gojo
	};

	/*sorcerer->ShowStatus();
	sorcerer->SurgicalMethod();*/

	for (int i = 0;i < 3;i++)
	{
		sorcerer[i]->ShowStatus();
		sorcerer[i]->SurgicalMethod();
		cout << " " << endl;

	}


	return 0;
}