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
	//Master dala eklendi 2
	//Master dala eklendi 3
	//Master dala eklendi 4
	//Master dala eklendi 5
	//Master dala eklendi 6
	//Master dala eklendi 8

	//Sum dalına eklendi 1
	//Sum dalına eklendi 2
	//Sum dalına eklendi 3
	//Sum dalına eklendi 4
	//Sum dalına eklendi 5
	//Sum dalına eklendi 6
	//Sum dalına eklendi 7

	return 0;
}
