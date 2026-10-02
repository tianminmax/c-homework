// 写一个函数，输入一个十六进制数，输出相应的十进制数。

// 格式要求：
// 先输出“input a HEX number:
// ”
// 用户在其后输入10后隔行输出“decimal number 16
// ”程序结束


#include <stdio.h>

int hex2num(char input[]) {
    int num = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            num = num * 16 + input[i] - '0';
        } else if (input[i] >= 'A' && input[i] <= 'F') {
            num = num * 16 + input[i] - 'A' + 10;
        } else if (input[i] >= 'a' && input[i] <= 'f') {
            num = num * 16 + input[i] - 'a' + 10;
        }
    }
    return num;
}

int main()
{
    char input[100];
    printf("input a HEX number:\n");
    scanf("%s", input);

    int num = hex2num(input);
    printf("decimal number %d\n", num);


    // printf("input a HEX number:\n");

    // unsigned int input1;
    // scanf("%x", &input1);
    // printf("decimal number %d\n", input1);

    return 0;
}