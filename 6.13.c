// 编一程序，将两个字符串连接起来，不要用strcat函数

// 格式要求：
// 先输出“input string1:
// ”
// 用户在其后输入yui后输出“input string2:
// ”
// 用户在其后输入dh后隔行输出“The new string is:
// yuidh”

#include <stdio.h>

int main()
{
    char str1[100], str2[100], str[100];

    printf("input string1:");
    scanf("%s", str1);
    printf("input string2:");
    scanf("%s", str2);
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {

        str[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        str[i] = str2[j];
        i++;
        j++;
    }
    printf("\nThe new string is:%s\n", str);
    return 0;
}