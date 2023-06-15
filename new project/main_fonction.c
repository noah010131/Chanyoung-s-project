#include <stdio.h>

void input_data (int*, int*);
double moyenne (int, int);

int main(void)
{
    int a, b;
    double myn;

    input_data (&a, &b);
    myn = moyenne (a, b);
    printf("%d 와 %d의 평균 : %.1lf\n", a, b, myn);

    return 0;

}