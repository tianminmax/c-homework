// 求S=1!+2!+3!+...10!。
// 输出示例：
// S=XXX

#include <stdio.h>

int main()
{
    int n = 10;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = 1;
        for (int j = 1; j <= i; j++)
        {
            temp *= j;
        }
        sum += temp;

    }
    printf("S=%d\n",sum);
}