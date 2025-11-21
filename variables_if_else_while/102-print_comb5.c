#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0'); /* tens of first number */
			putchar(i % 10 + '0'); /* units of first number */
			putchar(' ');           /* space */
			putchar(j / 10 + '0'); /* tens of second number */
			putchar(j % 10 + '0'); /* units of second number */
			if (!(i == 98 && j == 99))
			{
				putchar(',');       /* comma */
				putchar(' ');       /* space */
			}
		}
	}
	putchar('\n');

	return (0);
}

