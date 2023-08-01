#include "lists.h"

/**
 * free_listint - to free the linked lists
 * @head: listint_t list to make them free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

