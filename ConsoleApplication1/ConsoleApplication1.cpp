// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COLS 11
int main()
{
	int m[][COLS] = {
		{ 0,0,0,0,1,1,1,0,0,0 },
		{ 0,0,0,1,0,0,0,1,0,0 },
		{ 0,0,1,0,0,0,0,0,1,0 },
		{ 0,1,0,0,1,0,1,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,0,0,0,0,1 },
		{ 1,0,0,1,1,1,1,1,0,0,1 },
		{ 0,1,0,0,0,0,0,0,0,1 },
		{ 0,0,1,0,0,0,0,0,1,0 },
		{ 0,0,0,1,0,0,0,1,0,0 },
		{ 0,0,0,0,1,1,1,0,0,0 },
	};


	int *pi = *m;
	int i, mn = sizeof(m) / sizeof(int);
	for (i = 0; i < mn; ++i, ++pi)
	{
		printf("%c%c", *pi, (i + 1) % COLS ? '\0' : '\n');
	}
	printf("This world is same as my smile\n");

	return 0;
}
