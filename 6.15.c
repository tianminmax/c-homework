// 编写一个程序，将字符数组s2中的全部字符复制到字符数组s1中。不用strcpy函数。复制时，’\0’也要复制进去。’\0’后面的字符不复制。
// 格式要求：
// 先输出“input s2:
// ”
// 用户在其后输入yiuh后输出“s1:
// yiuh”

#include <stdio.h>

// extern char *gets(char *str);

int main() {
    char s1[100];
    char s2[100];

    printf("input s2:");
    gets(s2);
    int i;
    for (i= 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';

    printf("s1:%s\n", s1);

    return 0;
}