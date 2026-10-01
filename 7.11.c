// 输入一个长度不超过10的字符串，将其按字符顺序排序。

// 先输出“input string:”
// 用户换行输入badhiopqlr后换行输出
// “string sorted:
// abdhilopqr”
// 如果用户换行输入eyiwoqssosq则换行输出“string too long,input again!input string:”
// 之后用户换行输入badhiopqlr后换行输出
// “string sorted:
// abdhilopqr”

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("input string:\n");
    gets(str);
    if (strlen(str) > 10)
    {
        printf("string too long,input again!input string:\n");
        gets(str);
    }
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }

    }
    printf("string sorted:\n%s\n", str);
}