#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *st = "d";
    printf("%s\n", st);
    char local[10] = {0};

    local[0] = 'a';
    local[1] = 'b';
    local[2] = 'c';
    st = local;

    printf("%s\n", st);

#if 0
output:
d
abc
#endif

    return (0);
}
