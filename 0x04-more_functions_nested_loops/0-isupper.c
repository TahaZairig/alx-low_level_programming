#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @i: The number to be checked.
 * Return: 1 for upper, 0 otherwise.
 */
int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
