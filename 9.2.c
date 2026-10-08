// 写一个函数days，实现上题的计算。由主函数将年、月、日传递给函数days，计算后将日子数传回主函数输出。

// 示例：
// 输入：2018,5,28
// 输出：5/28 is the 148th day in 2018.




#include <stdio.h>


struct Time {
    int year;
    int month;
    int day;
};
int count(struct Time time);

int main() {

    struct Time time;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;

    scanf("%d,%d,%d", &time.year, &time.month, &time.day);
    sum = count(time);
    printf("%d/%d is the %dth day in %d.\n", time.month, time.day, sum, time.year);

}

int count(struct Time time) {
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    if (time.year % 400 == 0 || (time.year % 4 == 0 && time.year % 100 != 0))
    {
        days[1] = 29;
    }

    for (int i = 0; i < time.month - 1; i++) {
        sum += days[i];
    }
    sum += time.day;
    return sum;
}