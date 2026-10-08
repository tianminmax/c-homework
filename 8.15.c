// 有一个班4个学生，5门课程。
// 1. 求第一门课程的平均分；
// 2. 找出有两门以上课程不及格的学生，输出他们的学号和全部课程成绩及平均成绩；
// 3. 找出平均成绩在90分以上或全部课程成绩在85分以上的学生。分别编三个函数实现以上三个要求。

// 示例：按姓名，学号，第一门成绩，第二门成绩。第三门成绩，第四门成绩，第五门成绩顺序依次输入信息，不同信息之间以空格隔开。每输入完成一名同学信息，换行后输入下一位同学信息。之后，系统输出第一门课程平均分，换行输出第2问中的学生信息，换行输出第3问中的学生信息。例如，
// 用户输入：
// zhangsan 1230 94 95 95 95 100
// lisi 4560 90 50 50 50 90
// wangwu 7890 90 90 95 80 80
// zhouliu 6540 90 40 60 90 100
// 系统输出：
// 91
// lisi 4560 90 50 50 50 90 66
// zhangsan 1230 94 95 95 95 100

// 格式要点注意：
// 为了方便可能使用的循环输出，66与100后面是各有一个空格，请同学们注意


#include <stdio.h>

void average_first_course(int (*grade)[5], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += grade[i][0];
    }
    printf("%d\n", sum / n);
}


void find_two_fail(char (*name)[20], int *id, int (*grade)[5], int n) {
    for (int i = 0; i < n; i++) {
        int fail_count = 0;
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            if (grade[i][j] < 60) {
                fail_count++;
            }
            sum += grade[i][j];
        }
        if (fail_count >= 2) {
            printf("%s %d ", name[i], id[i]);
            for (int j = 0; j < 5; j++) {
                printf("%d ", grade[i][j]);
            }
            printf("%d \n", sum / 5);
        }
    }
}


void find_high_score(char (*name)[20], int *id, int (*grade)[5], int n) {
    for (int i = 0; i < n; i++) {
        int sum = 0;
        int all_above_85 = 1;
        for (int j = 0; j < 5; j++) {
            sum += grade[i][j];
            if (grade[i][j] <= 85) {
                all_above_85 = 0;
            }
        }
        if (sum / 5 >= 90 || all_above_85) {
            printf("%s %d ", name[i], id[i]);
            for (int j = 0; j < 5; j++) {
                printf("%d ", grade[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
    char name[4][20];
    int id[4];
    int grade[4][5];

    for (int i = 0; i < 4; i++) {
        scanf("%s %d", name[i], &id[i]);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    average_first_course(grade, 4);
    find_two_fail(name, id, grade, 4);
    find_high_score(name, id, grade, 4);

    return 0;
}