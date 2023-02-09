#include "Header.h"

int factor(int z)
{
	if (z == 1)
	{
		return 1;
	}
	else
	{
		return z * factor(z - 1);
	}
}

int stepen(int s, int a) 
{
	if (a == 0)
		return 1;
	else
		return s * stepen(s, a - 1);
}