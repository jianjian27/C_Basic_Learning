#include <stdio.h>

int main(void)
{
    int samples[6] = {10, 20, 30, 40};
    size_t count = 4;
    size_t remove_index = 1;

    if (remove_index < count)
    {
        for (size_t i = remove_index; i + 1 < count; i++)
        {
            samples[i] = samples[i + 1];
        }

        count--;
    }

    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", samples[i]);
    }

    printf("\ncount = %u\n", (unsigned int)count);

    return 0;
}
