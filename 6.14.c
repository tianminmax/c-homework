#include <stdio.h>

// extern char *gets(char *str);

int compare(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char str1[100];
    char str2[100];
    printf("input string1:");
    gets(str1);
    printf("\ninput string2:");
    gets(str2);

    printf("\nresult:%d.\n", compare(str1,str2));
    return 0;
}