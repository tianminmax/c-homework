#include <stdio.h>

//enter a positive number:The square root of 2.00 is 1.41421
int main() {
    double a=2;
    printf("enter a positive number:");
    scanf("%lf", &a);
    double x1 = a, x2 = a;
    do {
        x1 = 0.5 * (x2 + a / x2);
        x2 = 0.5 * (x1 + a / x1);
    } while ((x1-x2)>1e-5 || (x1-x2)<-1e-5);
    printf("The square root of %.2lf is %.5lf\n",a, x2);
}