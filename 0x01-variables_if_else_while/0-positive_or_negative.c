#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This function generates a random integer and determines whether it is
 * positive, negative, or zero, and then prints out the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n > 0)
        {
                printf(" %d is positive", n);
        }
        else if (n == 0)
        {
                printf(" %d is zero\n", n);
        }
        else
        { 
                printf(" %d is negative\n", n);
        }

        return (0);
}

