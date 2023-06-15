#include <stdio.h>

void input_data(int *a, int *b)
{
    puts("두 정수 입력 :");
    scanf("%d%d", a, b);
}

double moyenne(int a, int b)
{
    int tot;
    double myn;

    tot = a + b;
    myn = tot / 2.0;

    return myn;
}