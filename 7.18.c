// 给出年、月、日，计算该日是该年的第几天。

// 格式要求：
// 先输出“input date(year,month,day):”
//     用户在其后输入2008,8,8后输出“2008/8/8 is the 221th day in this year.”


//思路：
//先把那一年的第一天转换成时间戳
//在把那一天也转换成时间戳
//然后两个减一下
//最后输出结果


//我chovy标准库还不让人调用了阿？！




// #include <stdio.h>
// #include <time.h>

// int main() {
//使用标准库将时间转换成时间戳
// time_t t1, t2;
// struct tm tm1, tm2;
// int year, month, day;
// int day_of_year;

// printf("input date(year,month,day):");
// scanf("%d,%d,%d", &year, &month, &day);

//设置tm1为该年的第一天
// tm1.tm_year = year - 1900;
// tm1.tm_mon = 0;
// tm1.tm_mday = 1;
// tm1.tm_hour = 0;
// tm1.tm_min = 0;
// tm1.tm_sec = 0;
// tm1.tm_isdst = -1;
// t1 = mktime(&tm1);

//设置tm2为用户输入的日期
// tm2.tm_year = year - 1900;
// tm2.tm_mon = month - 1;
// tm2.tm_mday = day;
// tm2.tm_hour = 0;
// tm2.tm_min = 0;
// tm2.tm_sec = 0;
// tm2.tm_isdst = -1;
// t2 = mktime(&tm2);

// day_of_year = (int)(t2 - t1) / (60 * 60 * 24) + 1;

//     printf("%d/%d/%d is the %dth day in this year.\n", year, month, day, day_of_year);

//     return 0;
// }

#include <stdio.h>

int isRunnian(int year) {
    if(year % 400 == 0 ||( year % 4 == 0 && year % 100 != 0)) {
        return 1;
    } else
        return 0;
}

int countDate(int isRun, int month, int day) {
    // int dayCount = 0;
    // switch (month) {
    // case 12:
    //     dayCount += 30;
    // case 11:
    //     dayCount += 31;
    // case 10:
    //     dayCount += 30;
    // case 9:
    //     dayCount += 31;
    // case 8:
    //     dayCount += 31;
    // case 7:
    //     dayCount += 30;
    // case 6:
    //     dayCount += 31;
    // case 5:
    //     dayCount += 30;
    // case 4:
    //     dayCount += 31;
    // case 3:
    //     dayCount += isRun ? 29 : 28;
    // case 2:
    //     dayCount += 31;
    // case 1:
    //     dayCount += day;
    // }

    int dayCount = 0;
    int monthDay[12] = {31, isRun?29:28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for(int i = 0; i < month - 1; i++) {
        dayCount += monthDay[i];
    }

    dayCount += day;

    return dayCount;
}


int main() {
    int year, month, day;
    int dayCount;

    printf("input date(year,month,day):");
    scanf("%d,%d,%d", &year, &month, &day);

    dayCount = countDate(isRunnian(year), month, day);
    printf("%d/%d/%d is the %dth day in this year.\n", year, month, day, dayCount);

    return 0;
}

