#pragma once
#include <cstdlib>
#include <ctime>
namespace PV511
{
	#define PI 3.14f
	void RandInit(int Seed = -1);
	int RandInt(int Max);
	int RandInt(int Min, int Max);
	int RandF(int Max);
	int RandF(int Min, int Max);
}