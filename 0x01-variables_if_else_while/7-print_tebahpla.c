#include <stdio.h>

/**
 * main - Prints alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	int albrev;

	for (albrev = 'z'; albrev >= 'a'; albrev--)
	{
		putchar(albrev);
	}
	putchar('\n');
	return (0);
}
