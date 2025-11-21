#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');  /* first digit */
			putchar(j + '0');  /* second digit */
			if (!(i == 8 && j == 9))
			{
				putchar(',');   /* comma */
				putchar(' ');   /* space */
			}
		}
	}
	putchar('\n');

	return (0);
}
