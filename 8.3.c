// 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写3个函数：①输入10个数；②进行处理；③输出10个数。

// 格式要求：
// 先输出“input 10 numbers:
// ”
// 用户在其后输入:32 24 56 78 1 98 36 44 29 6后输出“Now,they are:1 24 56 78 32 6 36 44 29 98”


#include <stdio.h>

void input(int a[], int n);
void process(int a[], int n);
void output(int a[], int n);

int main()
{
    int a[10];
    input(a, 10);
    process(a, 10);
    output(a, 10);
    return 0;
}

void input(int a[], int n) {
    printf("input 10 numbers:");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void process(int a[], int n) {
    int min = a[0], max = a[0], min_index = 0, max_index = 0;
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
            min_index = i;
        }
        if(a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    a[min_index] = a[0];
    a[0] = min;
    a[max_index] = a[n-1];
    a[n-1] = max;
}

void output(int a[], int n) {
    printf("Now,they are:");
    for(int i = 0; i < n-1; i++) {
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n-1]);
}