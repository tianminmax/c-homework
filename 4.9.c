// 给一个不多于5位的正整数，要求：
// 1.求出它是几位数；
// 2.分别输出每一位数字；
// 3.按逆序输出各位数字；
// 输入20，输出示例：
// 请输入一个整数(0-99999):位数:2
// 每位数字为:2,0
// 反序数字为:02


#include <stdio.h>

int main()
{
    int num;
    printf("请输入一个整数(0-99999):");
    scanf("%d", &num);
    int count = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("位数:%d\n", count);
    temp = num;
    int number[count];
    for (int i = 0; i < count; i++) {
        number[count-i-1] = temp % 10;
        temp /= 10;
    }
    printf("每位数字为:");
    for (int i = 0; i < count; i++) {
        printf("%d", number[i]);
        if (i != count - 1) {
            printf(",");
        }
        else {
            printf("\n");
        }
    }
    printf("反序数字为:");
    for (int i = 0; i < count; i++) {
        printf("%d", number[count - i-1]);
    }
}