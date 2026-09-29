// 输入a,n,求S=a + aa + a...a(n个a)，其中a是个整数。
// 示例：
// 输入2,3时，输出：
// S=246


#include <stdio.h>

int main()
{
    int a, n;
    scanf("%d,%d", &a, &n);
    int i;
    int sum = 0;
    int j = 0;
    for (i = 1; i <= n; i++)
    {
        j = j * 10 + a;
        sum += j;
    }
    printf("S=%d\n",sum);
    return 0;
}