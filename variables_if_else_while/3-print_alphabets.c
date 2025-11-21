#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and then uppercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c;

    /* Print lowercase letters */
    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    /* Print uppercase letters */
    for (c = 'A'; c <= 'Z'; c++)
        putchar(c);

    /* Print newline */
    putchar('\n');

    return (0);
}
