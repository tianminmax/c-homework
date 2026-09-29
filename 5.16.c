#include <stdio.h>

int main() {
    int i;
    for (i = 1; i < 7; i += 2)
    {
        for(int j=0; j<3-i/2; j++) {
            printf(" ");
        }
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (; i > 0; i-=2) {
        for(int j=0; j<3-i/2; j++) {
            printf(" ");
        }
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}