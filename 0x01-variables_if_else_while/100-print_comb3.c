#include <stdio.h>

/**
 * main - Prints different combintions of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (i + j < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
