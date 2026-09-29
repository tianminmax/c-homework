#include <stdio.h>
#include <math.h>

int main()
{
    double d = 300000, p = 6000, r = 0.01;
    double m = log(p / (p - d * r)) / log(1 + r);

    printf("m=%.2f\n", m);
    return 0;
}