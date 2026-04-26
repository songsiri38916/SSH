#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 0;
    double QWE;

    printf("삼각형의 밑변: ");
    scanf("%d", &x);

    printf("삼각형의 높이: ");
    scanf("%d", &y);

    QWE = x * y / 2;

    printf("삼각형의 넓이:%0.2lf", QWE);

    return 0;
}