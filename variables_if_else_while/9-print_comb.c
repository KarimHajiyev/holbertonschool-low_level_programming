#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers separated by ', '
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');  /* print number */
		if (i != 9)
		{
			putchar(',');   /* print comma */
			putchar(' ');   /* print space */
		}
	}
	putchar('\n'); /* new line */

	return (0);
}
