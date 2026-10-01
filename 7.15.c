// 写几个函数：
// ①输入10个职工的姓名和职工号；
// ②按职工号由小到大顺序排序，宗明顺序也随之调整；
// ③要求输入一个职工号，用折半查找法找出改职工的姓名，从主函数输入要查找的职工号，输出该职工姓名。

// 格式要求：
// 先输出“input NO. and name:”换行
// 用户输入3 Li后输出“input NO. and name:”
// 如此类推输入十次后点击回车后空一行换行输出“
// result:
// 1 Zhang
// 2 Wang
// 3 Li
// 6 Zhao
// 7 Qian
// 8 Sun
// 12 Jiang
// 23 Shen
// 26 Han
// 27 Yang
// input number to look for:”，换行
// 用户在其后输入3后换行输出“NO.3 , his name is Li.



//来一个二维数组arr[10][2]
//第一行储存职工号，第二行储存姓名序号
//然后凭借姓名序号从name[10]里面找名字

#include <stdio.h>


void bubblesort(int arr[][2]) {
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j][0] > arr[j + 1][0])
            {
                int temp = arr[j][0];
                arr[j][0] = arr[j + 1][0];
                arr[j + 1][0] = temp;

                int temp_idx = arr[j][1];
                arr[j][1] = arr[j + 1][1];
                arr[j + 1][1] = temp_idx;
            }
        }
    }
}

int find_name(int arr[][2], int num) {
    int low = 0, high = 9;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid][0] == num) {
            return arr[mid][1];
        } else if (arr[mid][0] > num) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}

int main()
{
    int arr[10][2];
    char name[10][10];
    int i, j, num;


    for (i = 0; i < 10; i++)
    {
        printf("input NO. and name:\n");
        scanf("%d %s", &arr[i][0], name[i]);
        arr[i][1] = i;
    }

    printf("\nresult:\n");
    bubblesort(arr);
    for (i = 0; i < 10; i++)
    {
        printf("%d %s\n", arr[i][0], name[arr[i][1]]);
    }
    printf("input number to look for:\n");
    scanf("%d", &num);
    printf("NO.%d , his name is %s.\n",num,name[find_name(arr, num)]);
}