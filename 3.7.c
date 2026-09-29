// 给定圆半径，圆柱高，求圆周长、圆面积、圆球表面积、圆球体积、圆柱体积。请按示例说明编程序，取小数点后两位数字
// 当输入1.5,3时，输出示例：
// 请输入圆半径r，圆柱高h：
// 圆周长为:9.42
// 圆面积为:7.07
// 圆球表面积为:28.27
// 圆球体积为:14.14
// 圆柱体积为:21.21


#include <stdio.h>
const double pi = 3.1415926;

int main() {
    double r, h;
    printf("请输入圆半径r，圆柱高h：");
    scanf("%lf,%lf", &r, &h);
    printf("\n圆周长为:%.2lf\n", 2 * pi * r);
    printf("圆面积为:%.2lf\n", pi * r * r);
    printf("圆球表面积为:%.2lf\n", 4 * pi * r * r);
    printf("圆球体积为:%.2lf\n", 4.0 / 3 * pi * r * r * r);
    printf("圆柱体积为:%.2lf\n", pi * r * r * h);

}