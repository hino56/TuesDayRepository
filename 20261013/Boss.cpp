#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss(string name) :Character(name) {}

void Boss::Attack()
{
	cout << "必殺技で攻撃をする" << endl;
}