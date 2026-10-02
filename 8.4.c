// 有n个数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数，见图8.43.写一函数实现以上功能，在主函数中输入n个整数和输出调整后的n个数。
// 格式要求：
// 先输出“how many numbers?”
// 用户在其后输入8后输出“input 8 numbers:”
// 用户换行输入12 43 65 67 8 2 7 11后换行输出“how many place you want move?”
// 用户在其后输入4后换行输出“Now,they are:
// 8 2 7 11 12 43 65 67”(每个数字之间空两格)


#include <stdio.h>

void move(int a[], int n, int m);


int main() {
    int n, m;
    printf("how many numbers?");
    scanf("%d", &n);

    int a[n];
    printf("input %d numbers:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nhow many place you want move?");
    scanf("%d", &m);
    printf("\nNow,they are:\n");
    move(a,n,m);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("%d\n", a[n-1]);
}

void move(int a[], int n, int m) {
    int temp[m];
    for (int i = 0; i < m; i++) {
        temp[i] = a[n - m + i];
    }
    for (int i = n - 1; i >= m; i--) {
        a[i] = a[i - m];
    }
    for (int i = 0; i < m; i++) {
        a[i] = temp[i];
    }
}

//这里有一个更好的方法：
//1. 三次翻转法（推荐：O(n) 时间，O(1) 空间）
// 思路：

// 先把整个数组翻转；

// 再把前 m 个翻转；

// 最后把后 n-m 个翻转。

// 例如 [1 2 3 4 5]，右移 2 位：

// 整体翻转 → [5 4 3 2 1]

// 翻转前 2 个 → [4 5 3 2 1]

// 翻转后 3 个 → [4 5 1 2 3]