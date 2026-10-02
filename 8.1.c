// 输入3个整数，按从小到大的顺序输出。

// 格式要求：
// 先输出“input three integer n1,n2,n3:”
// 用户在其后输入34,21,25后隔行输出“Now,the order is:21,25,34”



#include <stdio.h>

void sort(int *n1, int *n2, int *n3);

int main()
{
    int n1, n2, n3;
    printf("input three integer n1,n2,n3:\n");
    scanf("%d,%d,%d", &n1, &n2, &n3);
    sort(&n1, &n2, &n3);
    printf("Now,the order is:%d,%d,%d\n", n1, n2, n3);

}

void sort(int *n1, int *n2, int *n3) {
    int temp;
    if(*n1 > *n2) {
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if(*n1 > *n3) {
        temp = *n1;
        *n1 = *n3;
        *n3 = temp;
    }
    if(*n2 > *n3) {
        temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
}

