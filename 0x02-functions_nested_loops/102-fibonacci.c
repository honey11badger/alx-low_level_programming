#include <stdio.h>

/**
 * main - prints all numbers
 * Return: always (success)
 */

int main() {
    int i, n = 50;
    int fib[n];

    // Initialize the first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 2;

    // Calculate and store the remaining Fibonacci numbers
    for (i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the Fibonacci numbers separated by comma and space
    for (i = 0; i < n-1; i++) {
        printf("%d, ", fib[i]);
    }

    // Print the last Fibonacci number followed by a new line
    printf("%d\n", fib[n-1]);

    return (0);
}
