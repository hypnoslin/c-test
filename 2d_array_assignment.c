#include <stdlib.h>
#include "stdio.h"
#include "string.h"

int (*head)[10][5];

int main() {
    int arr[10][5];

    for (int m = 0; m < 5; m++) {
        for (int n = 0; n < 10; n++) {
            arr[n][m] = n + m;
        }
    }

#if 1
    for(int m=0;m<5;m++)
    {
        for(int n=0;n<10;n++)
        {
            printf("%d ",arr[n][m]);
        }
        printf("\n");
    }
#endif

    printf("--------------------\n");

    head = &arr;

    for (int m = 0; m < 5; m++) {
        for (int n = 0; n < 10; n++) {
            printf("%d ", *head[n][m]);
        }
        printf("\n");
    }

#if 0
output:
0 1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 
2 3 4 5 6 7 8 9 10 11 
3 4 5 6 7 8 9 10 11 12 
4 5 6 7 8 9 10 11 12 13 
------------------------------------
0 294584832 1500405840 1500409462 8 -1895655424 0 0 0 0 
1 32553 32764 32764 0 3421791 0 0 0 0 
2 32768 1500407562 1500409770 0 0 0 0 0 0 
3 0 32764 32764 0 0 0 0 0 0 
4 1500405840 1500409150 1501450240 14 0 0 0 0 0
#endif

    return 0;
}
