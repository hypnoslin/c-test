#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int val;
    char str[20];

    strcpy(str, "98993489 KB 55555");
    val = atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

    strcpy(str, "gitbook.net");
    val = atoi(str);
    printf("String value = %s, Int value = %d\n", str, val);

#if 0
output:
String value = 98993489 KB 55555, Int value = 98993489
String value = gitbook.net, Int value = 0
#endif
    return (0);
}
