
// 有n个人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。

// 格式要求：
// 先输出“input number of person:
// n=”
//   用户在其后输入8后换行输出“The last one is NO.7”


#include <stdio.h>

int main()
{
    int n;
    printf("input number of person: n=");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    int mod = 0;
    int deleted = 0;
    // int times = 0;
    while (deleted != n - 1)
    {
        for (int i = 0; i < n; i++) {
            // times++;
            if (a[i] != 0) {
                mod++;
                if (mod==3) {
                    a[i] = 0;
                    deleted++;
                    mod = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("\nThe last one is NO.%d\n", a[i]);
            // printf("times = %d", times);
        }
    }
}