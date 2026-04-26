#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 0;
    double QWE;

    printf("화씨값을 입력하시오: ");
    scanf("%d", &x);


    QWE = (5.0/9.0)*(x - 32.0);

    printf("섭씨값은 % .2lf 도 입니다.", QWE);

    return 0;
}