#pragma once

//定数
const int PITCHING_MIN = 0;
const int PITCHING_MAX = 3;
const int PROBABILITY = 4;

const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

enum PitchType
{
	Straight,
	Curve,
	Slider,
	Sinker
};

//関数プロトタイプ
void PitchingType(int pitching);

void Result(int out);

int InputCheck(int min, int max);

