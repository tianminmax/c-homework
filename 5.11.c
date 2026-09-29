// 一个球从100m高度自由落下，每次落地反弹回原高度一半，再落地，再反弹。求它10次落地共经过多少米，第10次反弹多高。（保留6位小数）
// 输出示例：
// 第10次落地时共经过xxx米
// 第10次反弹xxx米

#include <stdio.h>

int main()
{
    double h = 100.0;
    double sum = -h;
    for (int i = 0; i < 10; i++) {
        sum += 2*h;
        h /= 2;
    }
    printf("第10次落地时共经过%.6lf米\n", sum);
    printf("第10次反弹%.6lf米\n", h);
}