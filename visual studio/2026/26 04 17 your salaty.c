#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x = 0;
    double QWE;

    printf("연봉을 입력하시오(단위: 만원): ");
    scanf("%lf", &x);


    QWE = 100000 / x;

    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf", QWE);

    return 0;
}
