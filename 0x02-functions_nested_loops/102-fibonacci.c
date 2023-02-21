#include <stdio.h>

/**
 * main - prints first 52 fibonacci values
 * Return: always 0
 */

int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count =  0; count < 50; count++)
{
    sum = fib1 + fib 2;
    printf("%lu", sum);

    fib1 = fib2;
    fib2 = sum;
    if (count == 49)
    printf("\n");
    else
    printf(", ")
}
printf("\n");
return (0);
}
