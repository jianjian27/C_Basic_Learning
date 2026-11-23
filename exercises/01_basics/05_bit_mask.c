#include <stdio.h>

int main(void)
{
    unsigned int value = 0x0Au;
    // 使用左移生成指定位掩码
    unsigned int mask = 1u << 2;

    // 或运算设置指定位
    value |= mask;
    printf("set:    0x%02X\n", value);

    // 翻转掩码与运算清除指定位
    value &= ~mask;
    printf("clear:  0x%02X\n", value);

    // 异或运算翻转指定位
    value ^= mask;
    printf("toggle: 0x%02X\n", value);

    if ((value & mask) != 0u)
    {
        printf("bit 2 is 1\n");
    }
}
