// 输入4个整数，要求按由小到大的顺序输出。
// 输入1,2,3,4时，输出：1,2,3,4

#include <stdio.h>

void BubbleSort(int *a,int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int a[4];
    for(int i=0; i<4; i++) {
        scanf("%d,",&a[i]);
    }
    BubbleSort(a,4);
    for(int i=0; i<4; i++) {
        printf("%d",a[i]);
        if (i!= 3)
            printf(",");
    }
}