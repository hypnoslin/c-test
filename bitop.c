#include <stdio.h>

int main() {
    printf("%x\n", ~(1 << (16 - 1)));
#if 0
output:
ffff7fff
#endif
}
