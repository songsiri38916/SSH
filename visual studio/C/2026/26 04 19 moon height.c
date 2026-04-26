#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x=0;
	double QWE;

	printf("몸무게를 입력하시오(단위: kg):");
	scanf("%d", &x);

	QWE = x * 0.17;

	printf("달에서의 몸무게는 %0.2lf 입니다",QWE);

	return 0;
}
