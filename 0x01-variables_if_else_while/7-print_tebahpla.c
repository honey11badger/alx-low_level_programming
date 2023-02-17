#include <stdio.h>

/**
 * main - Prints alphabets in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
        char num;
        
        for (num = 'z'; num >= 'a'; num--)
                putchar(num);      
            
        putchar('\n');

        return (0);
}
