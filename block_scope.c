#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int aa = 0;

    {
        int aa = 5;
        printf("%d\n", aa);
    }

    printf("%d\n", aa);

    {
        aa = 5;
        printf("%d\n", aa);
    }

    printf("%d\n", aa);

#if 0
output:
5
0
5
5
#endif

    return (0);
}
