#include <stdio.h>
#include <stdlib.h>
#include "inc_a.h"

int sum(int x, int y)
{
	return x+y;//Comments eklendi.
}

int divide(int x, int y)
{
	if (y != 0)
		return x/y;

	return 0;
}

int main (int arg, char *argv[])
{
	printf( "\nHello World Testbranch1 3!\n" );
	//Master dala eklendi 1

	return 0;
}
