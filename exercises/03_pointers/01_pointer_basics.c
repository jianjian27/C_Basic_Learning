#include <stdio.h>

int main(void)
{
    int sample_a = 100;
    int sample_b = 200;

    int *p = &sample_a;

    printf("&sample_a = %p\n", (void *)&sample_a);
    printf("&sample_b = %p\n", (void *)&sample_b);
    printf("p         = %p\n", (void *)p);
    printf("&p        = %p\n", (void *)&p);

    printf("*p = %d\n", *p);

    *p = 150;
    printf("sample_a = %d\n", sample_a);

    p = &sample_b;
    *p = 250;

    printf("sample_a = %d\n", sample_a);
    printf("sample_b = %d\n", sample_b);

    return 0;
}
