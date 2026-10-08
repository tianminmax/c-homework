// 有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩，从键盘输入10个学生数据，要求输出3门课程总平均成绩，以及最高分学生的数据（包括学号、姓名、3门课程成绩、平均分数，保留小数点后两位）。
// 以5个学生为例，例如：
// 输入：1 Zhangsan 89 67 78 2 Lisi 69 78 77 3 Liufei 98 96 95 4 Liming 87 96 85 5 Hanxue 90 87 93
// 输出：
// 总平均成绩为85.67
// 最高分学生为3,Liufei,98.00,96.00,95.00,96.33


#include <stdio.h>


struct Student {
    int id;
    char name[20];
    float score[3];
    float average;

};


void count_single_average(struct Student stu[],int n) {
    for (int i = 0; i < n; i++) {
        stu[i].average = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

float count_total_average(struct Student stu[],int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += stu[i].score[0] + stu[i].score[1] + stu[i].score[2];
    }
    return sum / (n * 3);
}
int find_highest(struct Student stu[],int n) {
    int highest = 0;
    for (int i=0; i<n; i++) {
        if (stu[i].average>stu[highest].average) {
            highest = i;
        }
    }
    return highest;
}

int main() {
    int n = 10;
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f %f %f", &students[i].id, students[i].name, &students[i].score[0], &students[i].score[1], &students[i].score[2]);
    }
    count_single_average(students, n);
    printf("总平均成绩为%.2f\n",count_total_average(students,n));
    int highest = find_highest(students, n);
    printf("最高分学生为%d,%s,%.2f,%.2f,%.2f,%.2f\n",
           students[highest].id,
           students[highest].name,
           students[highest].score[0],
           students[highest].score[1],
           students[highest].score[2],
           students[highest].average
          );
    return 0;
}