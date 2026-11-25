#include <stdio.h>

int main(void)
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int b[3][2] = {{1, 0}, {0, 1}, {1, 1}};

    int c[2][2] = {0};

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            for (int k = 0; k < 3; k++)
            {
                c[row][col] += a[row][k] * b[k][col];
            }
        }
    }

    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("%d ", c[row][col]);
        }
        printf("\n");
    }

    return 0;
}
