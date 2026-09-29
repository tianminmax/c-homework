// 有一行电文，按下面规律译成密码，第1个字母变成第26个字母，第i个字母变成第（26-i+1）个字母，非字母字符不变，编程序将密码译回原文，并输出密码和原文。
// 示例：
// 密码为
// 原文为

#include <stdio.h>

void decode(char *str,char *output,int lengh) {
    for (int i = 0; i < lengh; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            output[i] = 'z' - str[i] + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            output[i] = 'Z' - str[i] + 'A';
        }
        else {
            output[i] = str[i];
        }
        output[lengh] = '\0';
    }
}

int main() {
    char str[100];
    char output[100];
    fgets(str, sizeof(str), stdin);
    int lengh = 0;
    while (str[lengh] != '\0') {
        lengh++;
    }
    decode(str,output,lengh);
    printf("密码为%s\n", str);
    printf("原文为%s\n", output);
}