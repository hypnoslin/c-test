#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char test_data[] = {
        0x0f, 0x10, 0x00, 0x10, 0x04, 0x00, 0xb9, 0x00, 0x01, 0x00, 0x64, 0x00, 0x01,
        0xce, 0x00, 0x01, 0x00, 0x10, 0x04, 0x0f, 0x28, 0x00, 0x64, 0x00, 0x00, 0x44,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x90, 0x00, 0x01, 0x00, 0x64, 0x00, 0xb9,
        0x00, 0x01, 0x00, 0x64, 0x00, 0xb9, 0x00, 0x02, 0x00, 0x64, 0x00, 0xb9, 0x00,
        0x03, 0x00, 0x64, 0x00, 0xb9, 0x00, 0x04, 0x00, 0x64, 0x00, 0x0f, 0x10, 0x00,
        0x11, 0x04, 0x00, 0xb9, 0x00, 0x02, 0x00, 0x64, 0x00, 0x01, 0xce, 0x00, 0x01,
        0x00, 0x11, 0x04, 0x0f, 0x10, 0x00, 0x12, 0x04, 0x00, 0xb9, 0x00, 0x03, 0x00,
        0x64, 0x00, 0x01, 0xce, 0x00, 0x01, 0x00, 0x12, 0x04, 0x0f, 0x10, 0x00, 0x13,
        0x04, 0x00, 0xb9, 0x00, 0x04, 0x00, 0x64, 0x00, 0x01, 0xce, 0x00, 0x01, 0x00,
        0x13, 0x04, 0x0f, 0x22, 0x00, 0xe8, 0x03, 0x00, 0x90, 0x00, 0x01, 0x00, 0x64,
        0x00, 0x04, 0x2c, 0x01, 0x01, 0x00, 0xe8, 0x03, 0x2c, 0x01, 0x02, 0x00, 0xe8,
        0x03, 0x2c, 0x01, 0x03, 0x00, 0xe8, 0x03, 0x2c, 0x01, 0x04, 0x00, 0xe8, 0x03,
        0x0f, 0x10, 0x00, 0xf2, 0x03, 0x00, 0xce, 0x00, 0x01, 0x00, 0x10, 0x04, 0x01,
        0xbb, 0x00, 0x01, 0x00, 0xf2, 0x03, 0x0f, 0x10, 0x00, 0xf3, 0x03, 0x00, 0xce,
        0x00, 0x01, 0x00, 0x11, 0x04, 0x01, 0xbb, 0x00, 0x01, 0x00, 0xf3, 0x03, 0x0f,
        0x10, 0x00, 0xf4, 0x03, 0x00, 0xce, 0x00, 0x01, 0x00, 0x12, 0x04, 0x01, 0xbb,
        0x00, 0x01, 0x00, 0xf4, 0x03, 0x0f, 0x10, 0x00, 0xf5, 0x03, 0x00, 0xce, 0x00,
        0x01, 0x00, 0x13, 0x04, 0x01, 0xbb, 0x00, 0x01, 0x00, 0xf5, 0x03, 0x0f, 0x16,
        0x00, 0x24, 0x04, 0x01, 0x06, 0x00, 0x01, 0x00, 0x64, 0x00, 0x02, 0x2c, 0x01,
        0x01, 0x00, 0xe8, 0x03, 0xbb, 0x00, 0x01, 0x00, 0xf2, 0x03, 0x0f, 0x16, 0x00,
        0x25, 0x04, 0x01, 0x06, 0x00, 0x02, 0x00, 0x64, 0x00, 0x02, 0x2c, 0x01, 0x02,
        0x00, 0xe8, 0x03, 0xbb, 0x00, 0x01, 0x00, 0xf3, 0x03, 0x0f, 0x16, 0x00, 0x26,
        0x04, 0x01, 0x06, 0x00, 0x03, 0x00, 0x64, 0x00, 0x02, 0x2c, 0x01, 0x03, 0x00,
        0xe8, 0x03, 0xbb, 0x00, 0x01, 0x00, 0xf4, 0x03, 0x0f, 0x16, 0x00, 0x27, 0x04,
        0x01, 0x06, 0x00, 0x04, 0x00, 0x64, 0x00, 0x02, 0x2c, 0x01, 0x04, 0x00, 0xe8,
        0x03, 0xbb, 0x00, 0x01, 0x00, 0xf5, 0x03,
    };

    printf("%ld\n", sizeof(test_data));

#if 0
output:
332
#endif

    return 0;
}
