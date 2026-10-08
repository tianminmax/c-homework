// 在主函数中输入10个等长的字符串。用另一函数对它们排序。然后在主函数输出这10个已排好的字符串。

// 示例：每输入一个字符串换行输入下一个，以此类推。输出为排序后的字符串，每输出一个字符串换行后再输出下一个。例如，
// 用户输入:
// as
// bs
// qw
// df
// yh
// kl
// ju
// lo
// tr
// mf
// 系统输出：
// as
// bs
// df
// ju
// kl
// lo
// mf
// qw
// tr
// yh
#include <stdio.h>
#include <string.h>

int main() {
    char input[10][3]= {"\0"};
    for (int i = 0; i < 10; i++) {
        scanf("%s",input[i]);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (strcmp(input[i],input[j])>0) {
                char temp[3] = {"\0"};
                strcpy(temp,input[i]);
                strcpy(input[i],input[j]);
                strcpy(input[j],temp);
            }

        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n",input[i]);
    }
    return 0;
}