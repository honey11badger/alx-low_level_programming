#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two different digits
 *              in ascending order, separated by a comma and a space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int d, p;

        for (d = '0'; d < '9'; d++)
        {
                for (p = d + 1; p <= '9'; p++)
                {
                        if (p != d)
                        {
                                putchar(d);
                                putchar(p);

                                if (d == '8' && p == '9')
                                        continue;

                                putchar(',');
                                putchar(' ');
                        }
                }
        }

        putchar('\n');
        return (0);
}

