#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x = 0;
    double QWE;

    printf("실수를 입력하시오: ");
    scanf("%lf", &x);


    QWE = 3*x*x + 7*x + 11;

    printf("다항식의 값은:%0.2lf", QWE);

    return 0;
}
