#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double z = 0;
	double QWE;

	printf("상자의 가로 세로 높이를 한번에 입력:");
	scanf("%lf %lf %lf", &x, &y, &z);

	QWE = x * y * z;

	printf("상자의 부피는 %.6lf입니다.", QWE);
	return 0;
}
