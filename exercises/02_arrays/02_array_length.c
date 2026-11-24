#include <stdio.h>

int main(void)
{
    int samples[6] = {100, 200, 300, 401};

    size_t count = sizeof(samples) / sizeof(samples[0]);

    for (size_t i = 0; i < count; i++)
    {
        printf("sample[%u] = %d\n", (unsigned int)i, samples[i]);
    }

    printf("count = %u\n", (unsigned int)count);

    return 0;
}
