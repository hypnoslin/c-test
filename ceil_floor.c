#include <stdio.h>

int main(void) {
    int isNegative = 0;
    float num = 1.0 * -40 + 0.00;
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    num = (int)(num * 1000 + 0.5) / 1000.000;

    if (isNegative) {
        num = -num;
    }
    printf("%0.8f\n", num);

#if 0
output:
-40.00000000
#endif

    return 0;
}
