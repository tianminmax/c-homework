// 输入10个学生5门成绩，分别用函数实现以下功能;
// 1.计算每个学生的平均分；
// 2.计算每门课的平均分；
// 3.找出所有50个分数中最高的分数所对应的学生和课程；
// 4.计算平均分方差：
// σ=1/n(Σxi^2)-((Σxi)/n)^2
//    其中，xi为某一学生的平均分。
//    格式要求：
//    输出“input score of student 1:
//    ”
//    用户输入87 88 92 67 78后输出“input score of student 2:
//    ”
//    用户在其后输入88 86 87 98 90后输出“input score of student 3:
//    ”
//    用户在其后输入76 75 65 65 78后输出“input score of student 4:
//    ”
//    用户在其后输入67 87 60 90 67后输出“input score of student 5:
//    ”
//    用户在其后输入77 78 85 64 56后输出“input score of student 6:
//    ”
//    用户在其后输入76 89 94 65 76后输出“input score of student 7:
//    ”
//    用户在其后输入78 75 64 67 77后输出“input score of student 8:
//    ”
//    用户在其后输入77 76 56 87 85后输出“input score of student 9:
//    ”
//    用户在其后输入84 67 78 76 89后输出“input score of student 10:
//    ”
//    用户在其后输入86 75 64 69 90后输出“

//    NO. cour1 cour2 cour3 cour4 cour5 aver

//    NO 1 87.00 88.00 92.00 67.00 78.00 82.40

//    NO 2 88.00 86.00 87.00 98.00 90.00 89.80

//    NO 3 76.00 75.00 65.00 65.00 78.00 71.80

//    NO 4 67.00 87.00 60.00 90.00 67.00 74.20

//    NO 5 77.00 78.00 85.00 64.00 56.00 72.00

//    NO 6 76.00 89.00 94.00 65.00 76.00 80.00

//    NO 7 78.00 75.00 64.00 67.00 77.00 72.20

//    NO 8 77.00 76.00 56.00 87.00 85.00 76.20

//    NO 9 84.00 67.00 78.00 76.00 89.00 78.80

//    NO 10 86.00 75.00 64.00 69.00 90.00 76.80

//    average: 79.60 79.60 74.50 74.80 78.60
//    highest: 98.00 NO. 2 course 4
//    variance 28.71
//    注：
//    (1)表头NO.那一行，NO.后五个空格，其他空三格
//    (2)NO后的数字和NO间隔一个空格，所有成绩为8位并保留小数点后两位
//    (3)显示最高成绩那一行，各参数之间空一格，NO.和course后的数字占两位
//    (4)所有浮点数前面的空格通过设置域宽产生，无需手动添加
//    （如输出成绩那一块通过%x.x来实现空格产生，而不用在数值前面加空格，输出均值方差那一块同理，可以简单的当成能用设置域宽产生空格的，就不手动输入空格）
//    (5)注意空行即回车的输入


#include <stdio.h>

double average_stu(double score[5]) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }
    return sum / 5;
}

double average_course(double score[10]) {
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += score[i];
    }
    return sum / 10;
}

double variance(double score_aver[10]) {
    double aver = average_course(score_aver);//这里算出所有学生的平均分
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += (score_aver[i]-aver)*(score_aver[i]-aver);
    }
    return sum / 10;
}

int main() {
    double score[10][5];
    double score_t[5][10];
    double score_aver[10];
    double max;
    double max_stu=1;
    double max_course=1;

    for (int i = 0; i < 10; i++) {
        printf("input score of student %d:", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%lf", &score[i][j]);
        }
    }

    printf("\nNO.     cour1   cour2   cour3   cour4   cour5   aver\n\n");
    for (int i = 0; i < 10; i++) {
        printf("NO %d",i+1);
        for (int j = 0; j < 5; j++) {
            printf("%8.2lf",score[i][j]);
        }
        score_aver[i] = average_stu(score[i]);
        printf("%8.2lf\n\n", score_aver[i]);
    }



    //先把矩阵转置一下
    //这里是不是顺便还可以把最大学生找出来，节省资源

    max = score[0][0];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++) {
            score_t[j][i] = score[i][j];

            //这里是在找
            if (score[i][j] > max) {
                max = score[i][j];
                max_stu = i+1;
                max_course = j+1;
            }
        }
    }

    printf("average:");
    for (int i = 0; i < 5; i++) {
        printf("%8.2lf", average_course(score_t[i]));
    }



    printf("\nhighest:%8.2lf NO.%2.0lf course%2.0lf\n", max,max_stu,max_course);
    printf("variance%8.2lf\n",variance(score_aver));
    return 0;
}