// 输入两个正整数m和n,求其最大公约数和最小公倍数。
// 输入5,8时，输出示例：
// 请输入两个正整数n,m:它们的最大公约数为:1
// 它们的最小公倍数为:40

#include <stdio.h>

int getGCD(int m,int n) {
    if(n == 0) {
        return m;
    } else {
        return getGCD(n, m % n);
    }
}
int main() {
    int m, n, i, gcd, lcm;
    printf("请输入两个正整数n,m:");
    scanf("%d,%d", &n, &m);
    gcd = getGCD(m, n);
    lcm = n * m / gcd;
    printf("它们的最大公约数为:%d\n", gcd);
    printf("它们的最小公倍数为:%d\n", lcm);
    return 0;
}