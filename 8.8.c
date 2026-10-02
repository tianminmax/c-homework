// 输入一行文字，找出其中大写字母、小写字母、空格、数字以及其他字符各有多少。
// 格式要求：
// 先输出“input string: ”冒号后空两格
// 用户在其后输入Today is 2008/8/8后隔行输出“upper case:1 lower case:6 space:2 digit:6 other:2”（各个参数显示后面间隔5个空格）



//梅开二度说是，这个做了多少次了
#include <stdio.h>

int main() {
    char str[200];
    // extern gets();
    printf("input string:  ");
    // fgets(str, sizeof(str), stdin);
    gets(str);

    int upper = 0, lower = 0, space = 0, digit = 0, other = 0;
    char *p = str;

    while (*p != '\0') {
        if (*p == '\r') {
            p++;
            continue;
        }
        if (*p >= 'A' && *p <= 'Z')
            upper++;
        else if (*p >= 'a' && *p <= 'z')
            lower++;
        else if (*p == ' ')
            space++;
        else if (*p >= '0' && *p <= '9')
            digit++;
        else
            other++;
        p++;
    }

    printf("\nupper case:%d     lower case:%d     space:%d     digit:%d     other:%d\n",
           upper, lower, space, digit, other);

    return 0;
}