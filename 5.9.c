// 一个数如果恰好等于它的因子之和，这个数就是完数。求1000之内的所有完数并输出其因子。

// 输出示例：
// 6,Its factors are 1,2,3
// xxx,Its factors are xxx,xxx

// #include <stdio.h>

// int isPerfectNumber(int n) {
//     int sum = 0;
//     int count = 0;
//     for (int i = 1; i <= n / 2; i++)
//     {
//         if (n%i == 0) {
//             sum += i;
//             count++;
//         }
//     }
//     if (sum == n) {
//         return count;
//     }
//     else {
//         return 0;
//     }
// }

// int main() {
//     for (int i=1; i<1000; i++) {
//         int count = isPerfectNumber(i);
//         if (count)
//         {
//             printf("%d,Its factors are ", i);
//             int count1 = 0;
//             for (int j = 1; j <= i / 2; j++)
//             {
//                 if (i%j == 0) {
//                     count1++;
//                     if (count1==count) printf("%d", j);
//                     else printf("%d,", j);
//                 }
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    for (int n = 2; n < 1000; n++) {
        int factors[100];
        int cnt = 0;
        int sum = 0;

        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                factors[cnt++] = i;
                sum += i;
            }
        }

        if (sum == n) {
            printf("%d,Its factors are ", n);

            for (int i = 0; i < cnt; i++) {
                if (i > 0) printf(",");
                printf("%d", factors[i]);
            }

            printf("\n");
        }
    }

    return 0;
}