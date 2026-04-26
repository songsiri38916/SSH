#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double x = 0;
	double QWE = 0;

	printf("평을 입력하세요:");
	scanf("%lf", &x);

	QWE = x * 3.3058;

	printf("%.6lf 평방미터입니다.", QWE);
	return 0;
}
