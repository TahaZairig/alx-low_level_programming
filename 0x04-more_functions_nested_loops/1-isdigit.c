#include "main.h"

/**
 * _isdigit - Checks for digit 0 to 9.
 * @n: number to be checked
 * Return: 1 for digit and 0 otherwis.
 */
int _isdigit(int n)
{
	if (n >= 48 && n <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
