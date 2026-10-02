// 有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。

// 格式要求：
// 先输出“input string:
// ”
// 用户在其后输入reading_room后换行输出“which character that begin to copy?”
// 用户在其后输入9后换行输出"room"
// 如果用户输入的数字大于字符串的长度则换行输出“input error!”


#include <stdio.h>

int strmcpy(char InputArr[], char OutputArr[], int m);

int main() {

    char input[100]= {'\0'};
    char output[100]= {'\0'};
    int m;

    printf("input string:");
    scanf("%s", input);
    printf("\nwhich character that begin to copy?");
    scanf("%d", &m);

    if (strmcpy(input, output, m)) {
        printf("\n%s", output);
    } else
        printf("\ninput error!");
}


int strmcpy(char InputArr[], char OutputArr[], int m) {
    if (InputArr[m-1]=='\0')
        return 0;
    else {
        int i = 0;
        while (InputArr[m - 1 + i] != '\0')
        {
            OutputArr[i] = InputArr[m - 1 + i];
            i++;
        }
        return 1;
    }
}