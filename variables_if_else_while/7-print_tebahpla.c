#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 122; /* ASCII of 'z' */
	while (i >= 97) /* ASCII of 'a' */
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
