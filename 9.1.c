// 定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
// 示例：
// 输入2018,10,10,输出：
// 10/10 is the 283th day in 2018.


#include <stdio.h>

int main() {
    struct Time {
        int year;
        int month;
        int day;
    };
    struct Time time;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;

    scanf("%d,%d,%d", &time.year, &time.month, &time.day);

    if (time.year%400==0 || (time.year%4==0 && time.year%100!=0)) {
        days[1] = 29;
    }

    for (int i = 0; i < time.month - 1; i++) {
        sum += days[i];
    }
    sum += time.day;

    printf("%d/%d is the %dth day in %d.\n", time.month, time.day, sum, time.year);
}