#include <stdio.h>

int main()
{
    int c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            letters++;
        }
        else if (c == ' ')
        {
            spaces++;
        }
        else if (c >= '0' && c <= '9')
        {
            digits++;
        }
        else
        {
            others++;
        }
    }
    others++;
    printf("英文字母%d\n", letters);
    printf("空格%d\n", spaces);
    printf("数字%d\n", digits);
    printf("其他字符%d\n", others);

    return 0;
}


// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     int c;
//     int letters = 0, spaces = 0, digits = 0, others = 1;

//     while ((c = getchar()) != EOF)
//     {
//         if (isalpha(c))
//         {
//             letters++;
//         }
//         else if (c == ' ')
//         {
//             spaces++;
//         }
//         else if (isdigit(c))
//         {
//             digits++;
//         }

//         else
//         {
//             others++;
//         }
//     }

//     printf("英文字母%d\n", letters);
//     printf("空格%d\n", spaces);
//     printf("数字%d\n", digits);
//     printf("其他字符%d\n", others);

//     return 0;
// }