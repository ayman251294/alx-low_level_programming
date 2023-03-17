#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
    int i, j, k;

    for (i = 0; i <= 9; i++)
    {
        for (j = i; j <= 9; j++)
        {
            for (k = 0; k <= 9; k++)
            {
                if ((i * 10 + j) < (k * 10 + i))
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(i + '0');

                    if (!((i == 9) && (j == 8) && (k == 9)))
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }

    return (0);
}
