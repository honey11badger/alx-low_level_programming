#include <stdio.h>

/**
 * main - Prints the alphabet in lower and lower case
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;
        
        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(lc);
        
        for (ch = 'A'; ch <= 'Z'; ch++)
                putchar(ch);
        
        putchar('\n');

        return (0);
}
