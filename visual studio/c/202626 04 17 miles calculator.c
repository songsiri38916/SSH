#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x = 0;
    double QWE;

    printf("마일을 입력하시오: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("연봉은 0보다 커야 합니다.\n");
        return 1;
    }

    // 10억은 100,000만 원입니다.
    QWE = 100000.0 / x;

    printf("10억을 모으는데 걸리는 시간(단위: 년): %.2lf년\n", QWE);

    return 0;
}
