#include <stdint.h>
#include <stdio.h>

int main(void)
{
    uint8_t value = 255;

    printf("before = %u\n", (unsigned int)value); // 255

    value = value + 1;

    printf("after = %u\n", (unsigned int)value); // 0

    uint8_t a = 200;
    uint8_t b = 100;

    uint8_t small_sum = a + b;
    uint16_t large_sum = a + b;

    printf("small_sum = %u\n", (unsigned int)small_sum); // 44
    printf("large_sum = %u\n", (unsigned int)large_sum); // 300

    return 0;
}
