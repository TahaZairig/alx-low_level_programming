#include "lists.h"

/**
 * free_listint2 - to free linked lists
 * @head: pointer to the listint_t list to make them free
 */

void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}

