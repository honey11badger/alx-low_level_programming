#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This function generates a random integer and then determines the last digit
 * of the number and prints out whether it is greater than 5, 0, or less than
 * 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
        int a;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        a = n % 10;

        if (a > 5)
        {
                printf("last digit of %d is %d and is greater than 5\n", n, a);
        }
        else if (a == 0)
        {
                printf("last digit of %d is %d and is 0\n", n, a);
        }
        else
        {
                printf("last digit of %d is %d and is less than 6 and not 0\n", n, a);
        }

        return (0);
}

