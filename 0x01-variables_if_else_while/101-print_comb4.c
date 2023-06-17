#include <stdio.h>

/**
 * main - Prints different combinations of three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i1;
	int i2;
	int i3;

	for (i1 = 0; i1 < 10; i++)
	{
		for (i2 = i1 + 1; i2 < 10; i2++)
		{
			for (i3 = i2 + 1; i3 < 10; i3++)
			{
				putchar('0' + i1);
				putchar('0' + i2);
				putchar('0' + i3);
				if (i1 != 7 || i2 != 8 || i3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
