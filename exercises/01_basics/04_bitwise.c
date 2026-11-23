#include <limits.h>
#include <stdio.h>

int main(void)
{
    unsigned int a = 0x0c;
    unsigned int b = 0x05;

    printf("a & b = %u\n", a & b);
    printf("a | b = %u\n", a | b);

    printf("a in decimal = %u\n", a);
    printf("a in hex = 0x%X\n", a);

    /*
    异或有一个很实用的性质：
    某一位 ^ 0 → 保持原样
    某一位 ^ 1 → 翻转
    所以，可以用它翻转指定的位：
    0101
  ^ 0001    ← 只翻转最右边一位
  ------
    0100
    取反 ~：每一位都翻转
    原来：00001100
    取反：11110011
    */

    // 查看int类型的字节数和位数
    printf("int bytes = %zu\n", sizeof(int));
    printf("bits per byte = %d\n", CHAR_BIT);
    printf("int bits = %zu\n", sizeof(int) * CHAR_BIT);

    /*
    要注意 参与运算的类型有多少位。如果写：
    unsigned int a = 12u;
    unsigned int result = ~a;
    ~ 会翻转整个 unsigned int 的所有位
    */

    /*
    如果我们只关心最低八位，可以写：
    unsigned int result = (~a) & 0xFFu;
    0xFF 的最低八位全是 1，其余位为 0。与它进行按位与，
    就能保留最低八位、清除其他位。
    这种用于选择特定位的数叫作 掩码（mask）。
    */

    unsigned int c = 0x0Cu; // 最低八位：00001100
    unsigned int d = 0x05u; // 最低八位：00000101

    unsigned int xor_result = c ^ d;
    unsigned int inverted = (~c) & 0xFFu;

    printf("c ^ d = %u, hex = 0x%02X\n", xor_result, xor_result);
    printf("low 8 bits of ~c = %u, hex = 0x%02X\n", inverted, inverted);

    // 左移右移

    // 左移：二进制向左移动，右边补零
    unsigned int value = 5u;          // 原值： 00000101 → 5
    unsigned int result = value << 1; // 左移： 00001010 → 10
    // 表达式本身不会修改原变量：
    value << 1;         // 算出了结果，但没有保存
    value = value << 1; // 保存回 value
    value <<= 1;        // 上一行的简写
    printf("value = %u\n", value);
    printf("result = %u\n", result);

    // 右移：二进制向右移动，低位被丢弃
    unsigned int value_r = 13u;
    unsigned int mask = 1u << 3;

    printf("left  = %u\n", value_r << 1);
    printf("right = %u\n", value_r >> 1);
    printf("mask  = 0x%02X\n", mask);

    return 0;
}
