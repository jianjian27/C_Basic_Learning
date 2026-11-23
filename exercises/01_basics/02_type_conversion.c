#include <stdio.h>

int main(void)
{
    int sample = 2048;
    int full_scale = 4095;

    float result_a = sample / full_scale;
    float result_b = (float)sample / full_scale;
    float result_c = (float)(sample / full_scale);

    printf("result_a = %.6f\n", result_a);
    printf("result_b = %.6f\n", result_b);
    printf("result_c = %.6f\n", result_c);

    return 0;
}
