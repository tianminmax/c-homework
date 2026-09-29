// 有4个圆塔，如课本图4.17所示，塔高10m。
// 输入一坐标，求该点的建筑高度（塔外为0）。
// 输入1.5,0时，输出：
// 请输入一个点(x,y):该点高度为0

#include <stdio.h>

int juli(double point[2],int target[2]) {
    return (point[0]-target[0])*(point[0]-target[0])+(point[1]-target[1])*(point[1]-target[1]);
}
int main()
{
    int point1[] = {2, 2};
    int point2[] = {-2, 2};
    int point3[] = {2, -2};
    int point4[] = {-2, -2};

    double point[2];
    printf("请输入一个点(x,y):");
    scanf("%lf,%lf",&point[0],&point[1]);
    if (juli(point,point1)<=1 ||juli(point,point2)<=1||juli(point,point3)<=1||juli(point,point4)<=1) {
        printf("该点高度为10\n");
    } else {
        printf("该点高度为0\n");
    }


}