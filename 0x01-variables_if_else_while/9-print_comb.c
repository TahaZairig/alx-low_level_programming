#include <stdio.h>

/**
 * main - Prints all possible combinations of single- digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			putchar(i, j);
	putchar('\n');
	return (0);
}
