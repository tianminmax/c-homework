// 用递归方法求n阶勒让德多项式的值，递归公式为
// 当n=0时Pn(x)=1 当n=1时Pn(x)=x
// 当n≥1时Pn(x)=((2n-1)×x-p(n-1)(x)-(n-1)×P(n-2)(x))/n
// 其中p(n-1),P(n-2)是符号
// 格式要求：
// 先输出“input n & x:”
// 用户在其后输入1，2后输出“n=1,x=2
// P1(2)=2.00”
// 注：Pn(x)保留小数点后两位

#include <stdio.h>

double Pn(int n, double x) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        return ((2 * n - 1) * x - Pn(n - 1, x) - (n - 1) * Pn(n - 2, x)) / n;
    }
}

int main() {
    int n;
    double x;
    printf("input n & x:");
    scanf("%d,%lf", &n, &x);
    printf("n=%d,x=%.0f\n",n,x);
    printf("P%d(%.0f)=%.2f\n", n, x, Pn(n, x));
}