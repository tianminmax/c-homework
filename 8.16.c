// 输入一个字符串，内有数字和非数字字符，例如：
// A123x456 17960? 302tab5876
// 将其中连续的数字作为一个整数，依次存放到一数组a中。例如，123放在a[0]，456放在a[1]...统计共有多少个整数，并输出这些数。

// 示例：
// 用户输入字符串：
// A123x456 17960? 302tab5876
// 系统先显示整数的个数，再依次输出这些数，数字之间以空格隔开，例如输出：
// 5 123 456 17960 302 5876

#include <stdio.h>

int main() {
    char str[100]= {'\0'};
    int a[10]= {0};
    int count = 0;
    int isINT = 0;

    // extern gets();
    gets(str);

    for (int i = 0; i < 100; i++)
    {
        if (str[i] >= '0' && str[i] <= '9') {
            if (isINT == 0) {
                count++;
            }
            a[count-1]=a[count-1]*10+str[i]-'0';
            isINT = 1;
        }
        else
            isINT = 0;
    }
    printf("%d ", count);
    for (int i = 0; i < count-1; i++)
    {
        printf("%d ", a[i]);

    }
    printf("%d\n",a[count - 1]);
    return 0;
}