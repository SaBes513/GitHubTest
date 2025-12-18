#include "Mathem.h"

void PV511::RandInit(int Seed)
{
	srand(Seed == -1? time(0) : Seed);
}

int PV511::RandInt(int Max)
{
	return rand() % Max;
}

int PV511::RandInt(int Min, int Max)
{
	return ((rand() % (Max - Min)) + Min);
}

int PV511::RandF(int Max)
{
	return 0;
}

int PV511::RandF(int Min, int Max)
{
	return 0;
}
