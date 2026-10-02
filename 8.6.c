// 写一个函数，求一个字符串的长度。在main函数中输入字符串，并输出其长度。

// 格式要求：
// 先输出“input string:
// ”
// 用户在其后输入China后换行输出“The length of string is 5.”

#include <stdio.h>

int length(char *input) {
    int count = 0;
    while (*(input+count)!=0) {
        count++;
    }
    return count;
}

int main() {
    printf("input string:");
    char input[100];
    scanf("%s", input);
    printf("\nThe length of string is %d.\n", length(input));
    return 0;
}