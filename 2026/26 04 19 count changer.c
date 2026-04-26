#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	x = 10, y = 20;

	printf("x = 10, y = 20\n");
	printf("x = %d, y = %d", y, x);


	return 0;
}