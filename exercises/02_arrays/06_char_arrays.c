#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[16] = "DSP_FPGA";

    printf("before: %s\n", text);

    text[3] = '\0';

    printf("after: %s\n", text);
    printf("length: %u\n", (unsigned int)strlen(text));
    printf("capacity: %u\n", (unsigned int)sizeof(text));

    char buffer[8];
    int sample = 4095;

    int written = snprintf(buffer, sizeof(buffer), "ADC=%d", sample);

    if (written < 0)
    {
        printf("formatting failed\n");
    }
    else
    {
        printf("buffer: %s\n", buffer);
        printf("required length: %d\n", written);

        if ((size_t)written >= sizeof(buffer))
        {
            printf("output truncated\n");
        }
    }

    return 0;
}
