// 输出杨辉三角（要求输出10行）。
// 示例：
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// ...

//shit山是怎么来的
// #include <stdio.h>

// int main() {
//     int a[10],b[10];
//     a[0] = 1;
//     int n = 1;
//     int count = 1;
//     //进行 行 的循环
//     for (int i =1; i<=10; i++) {
//         //进行 列 的循环
//         for (int j = 0; j <= i; j++)
//         {
//             if (j==0)
//                 b[j] = a[j];
//             else if (j == i)
//                 b[j] = 1;
//             else
//                 b[j] = a[j] + a[j - 1];
//         }
//         for (int k = 0; k < i; k++)
//         {
//             a[k] = b[k];
//             printf("%d\t", a[k]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int a[11] = {0};
    a[0] = 1;

    for (int i = 0; i < 10; i++) {
        //重点是从后往前更新，这个就不需要再来一个数组了
        for (int j = i; j > 0; j--) {
            a[j] = a[j] + a[j - 1];
        }


        for (int j = 0; j <= i; j++) {
            if (j > 0) printf(" ");
            printf("%d", a[j]);
        }
        printf("\n");
    }

    return 0;
}