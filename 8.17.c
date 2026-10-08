// 写一函数，实现两个字符串比较。即自己写一个strcmp函数，函数原型为
// int strcmp(char * p1,char * p2);
// 设p1指向字符串s1,设p2指向字符串s2。要求当s1=s2时，返回值为0；若s1不等于s2，返回它们二者第一个不同字符的ASCII码差值（如"BOY"与"BAD"，第2个字母不同，O与A之差为79-65=14。）如果s1>s2,则输出正值；如果s1

// 示例：
// 用户输入第一个字符串，换行后输入第二个字符串。系统返回数值。例如

// 用户输入：
// asdfgh
// asdfgh
// 系统输出：
// 0



#include <stdio.h>


int strcmp(char * p1,char * p2);

int main() {
    char s1[100],s2[100];
    // extern gets();
    scanf("%s",s1);
    scanf("%s",s2);
    printf("%d\n",strcmp(s1,s2));
    return 0;
}

int strcmp(char * p1,char * p2) {
    while(*p1 == *p2 && *p1 != '\0') {
        p1++;
        p2++;
    }
    return *p1-*p2;
}


