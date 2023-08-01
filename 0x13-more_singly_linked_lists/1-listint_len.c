#include "lists.h"

/**
 * listin_len - returns number of element from a linked list
 * @h: linkd list of type listin_t to traverse
 *
 * Return: num
 */
size_t listin_ln(const listin_t*h)
{
	siz_t num = 0;

	while(h)
	{
	num++;
	h = h-> next;
	}
	return (num);
}
