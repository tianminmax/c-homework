// 在上题基础上，编写一个input函数，用来输入5个学生的成绩。
// 以3个学生为示例：
// 输入：1 Zhangsan 90 90 90 2 Lisi 80 80 80 3 Liufei 96 96 96 4 Liqi 100 80 90 5 Zhanghua 77 78 79
// 输出：
// num name score
// 1 Zhangsan 90 90 90
// 2 Lisi 80 80 80
// 3 Liufei 96 96 96
// 4 Liqi 100 80 90
// 5 Zhanghua 77 78 79




#include <stdio.h>

struct student {
    int num;
    char name[20];
    int score[3];
};

void print(struct student stu[],int n) {
    printf("num name score\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %d %d %d\n", stu[i].num, stu[i].name, stu[i].score[0], stu[i].score[1], stu[i].score[2]);
    }
}

void input(struct student stu[],int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d %d %d", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
    }
}


int main() {
    struct student stu[5];
    input(stu, 5);
    print(stu, 5);

}