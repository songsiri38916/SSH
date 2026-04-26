#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char x = 0;
	int y = 0;
	
	printf("ÀÔ·Â:");
	scanf("%c", &x);

	y = x + 32;

	printf("%d, %d", x ,y);


	return 0;
}
