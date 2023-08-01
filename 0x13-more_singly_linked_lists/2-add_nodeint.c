#include "lists.h"

/**
 * add_nodeint - to add new node at the beginning of linked lists
 * @head: pointer to the 1st node in the lists
 * @n: data to insert in new node
 *
 * Return: pointer to new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);


	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

