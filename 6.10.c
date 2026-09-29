// 有一篇文章，共有2行文字，每行10个字符。要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
// 输出示例：
// 大写字母个数X
// 小写字母个数X
// 数字个数X
// 空格个数X
// 其他字符个数X
#include <stdio.h>




// #include <string.h>


// void base64(char *inarray, char *output) {
//     const char *table = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
//     int len = strlen(inarray);
//     int i, j = 0;

//     for (i = 0; i < len; i += 3) {
//         unsigned char b0 = (unsigned char)inarray[i];
//         unsigned char b1 = (i + 1 < len) ? (unsigned char)inarray[i + 1] : 0;
//         unsigned char b2 = (i + 2 < len) ? (unsigned char)inarray[i + 2] : 0;

//         output[j++] = table[b0 >> 2];
//         output[j++] = table[((b0 & 0x03) << 4) | (b1 >> 4)];

//         if (i + 1 < len) {
//             output[j++] = table[((b1 & 0x0F) << 2) | (b2 >> 6)];
//         } else {
//             output[j++] = '=';
//         }

//         if (i + 2 < len) {
//             output[j++] = table[b2 & 0x3F];
//         } else {
//             output[j++] = '=';
//         }
//     }

//     output[j] = '\0';
// }
//还好用base64看了一下输入，不然真的挂在这里了



int main()
{
    char a[20];
    int count = 0;
    char in;
    int big = 0, small = 0, num = 0, space = 0, other = 0;

    // char string[50];
    while (count < 20)
    {
        in = getchar();
        if (in == '\n'|| in == EOF || in=='\r') {//神人换行符'\r'
            continue;
        }
        a[count] = in;
        count++;
    }
    for (int i = 0; i < 20; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            big++;
        else if (a[i] >= 'a' && a[i] <= 'z')
            small++;
        else if (a[i] >= '0' && a[i] <= '9')
            num++;
        else if (a[i] == ' ')
            space++;
        else
            other++;
    }
    printf("大写字母个数%d\n小写字母个数%d\n数字个数%d\n空格个数%d\n其他字符个数%d\n", big, small, num, space, other);
    // base64(a, string);
    // printf("%s\n", string);
    return 0;
}