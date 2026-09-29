// 给出一百分制成绩，要求输出成绩等级'A'、'B'、'C'、'D'、'E'。90分以上为A，80~89分为B，70~79分为C，60~69分为D，60分以下为E。

// 输入是1.0时（请注意保留一位小数），输出示例：
// 请输入学生成绩:成绩是1.0,相应的等级是E

#include <stdio.h>

int main()
{
    float grade;
    printf("请输入学生成绩:");
    scanf("%f", &grade);
    if (grade >= 90)
    {
        printf("成绩是%.1f,相应的等级是A\n", grade);

    }
    else if (grade >= 80)
    {
        printf("成绩是%.1f,相应的等级是B\n", grade);
    }
    else if (grade >= 70) {
        printf("成绩是%.1f,相应的等级是C\n", grade);

    }
    else if (grade >= 60) {
        printf("成绩是%.1f,相应的等级是D\n", grade);
    }
    else {
        printf("成绩是%.1f,相应的等级是E\n", grade);
    }
}