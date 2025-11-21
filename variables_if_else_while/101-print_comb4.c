#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0'); /* first digit */
				putchar(j + '0'); /* second digit */
				putchar(k + '0'); /* third digit */
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(',');   /* comma */
					putchar(' ');   /* space */
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
