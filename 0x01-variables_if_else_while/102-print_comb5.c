#include <stdio.h>

/**
 * main - Prints combintions of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int i2;

	for (i = 0; i < 100; i++)
	{
		for (i2 = i + 1; i < 100; i++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(' ');
			putchar('0' + i2 / 10);
			putchar('0' + i2 % 10);
			if (i < 98 || i2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
