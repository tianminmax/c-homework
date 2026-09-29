// 有15个数按由小到大顺序存放在一个数组中，输入一个数，要求用折半查找法找出该数是数组中第几个元素的值。
// 输入：1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 3
// （前15个数字为数组，最后一个为要找的数）
// 输出：
// 3

#include <stdio.h>

int main()
{
    int a[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int n, low = 0, high = 14, mid;

    for (int i =0; i<15; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    mid = (low + high) / 2;
    while(n!=a[mid]) {
        mid = (low + high) / 2;
        if (n < a[mid]) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    printf("%d\n", mid+1);
}