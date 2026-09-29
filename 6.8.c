// 找出一个3*3的二维数组中的鞍点，即该位置上的元素在该行上最大，在该列上最小。示例：
// 输入1 15 5
//    4 9 6
//    6 12 8,输出：
// 1,1,9

// 若无鞍点，输出：
// not exist

// 注：输出的前两个数字为鞍点所在的行和列，第三个数字为鞍点的值，输入时是按行输入，即先输入第一行数据在输入第二行以此类推


// #include <stdio.h>

// int main()
// {
//     int a[3][3];
//     int i, j, k, max, min;
//     int row, col;

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {

//         max = a[i][0];
//         for (j = 0; j < 3; j++)
//         {
//             if (a[i][j] > max)
//             {
//                 max = a[i][j];
//                 row = i;
//                 col = j;
//             }
//         }

//         min = a[0][col];
//         for (k = 0; k < 3; k++)
//         {
//             if (a[k][col] < min)
//             {
//                 min = a[k][col];
//             }
//         }

//         if (max == min)
//         {
//             printf("%d,%d,%d\n", row, col, max);
//             return 0;
//         }
//     }
// }


#include <stdio.h>

int main()
{
    int a[3][3];
    int row, col;
    int max;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        max = a[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
        for (int k = 0; k < 3; k++)
        {

            if (a[k][col] < max)
            {
                break;
            }
            else if (k == 2)
            {
                printf("%d,%d,%d\n", row, col, max);
                return 0;
            }
        }


    }
}