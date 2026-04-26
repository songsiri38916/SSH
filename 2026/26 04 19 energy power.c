#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0;
	double y = 0;
	double QWE;

	printf("질량(kg):");
	scanf("%lf",&x);

	printf("속도(m/s):");
	scanf("%lf", &y);

	QWE = 0.5 * x * y * y;

	printf("운동에너지(J):%.6lf", QWE);

	return 0;
}