#include <stdio.h>

int main(void)
{
    int samples[] = {120, -30, 250, 80, -20};
    size_t count = sizeof(samples) / sizeof(samples[0]);

    long long sum = samples[0];
    int maximum = samples[0];
    int minimum = samples[0];

    for (size_t i = 1; i < count; i++)
    {
        sum += samples[i];

        if (samples[i] > maximum)
        {
            maximum = samples[i];
        }

        if (samples[i] < minimum)
        {
            minimum = samples[i];
        }
    }

    double average = (double)sum / count;

    printf("sum = %lld\n", sum);
    printf("average = %.2f\n", average);
    printf("maximum = %d\n", maximum);
    printf("minimum = %d\n", minimum);

    return 0;
}
