#include <stdio.h>

int main(void)
{
    int samples[4] = {100, 200, 300, 401};
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        printf("sample[%d] = %d\n", i, samples[i]);
        sum += samples[i];
    }

    float average = sum / 4.0f;

    printf("sum = %d\n", sum);
    printf("average = %.2f\n", average);

    return 0;
}
