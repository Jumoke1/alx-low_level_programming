#include "lists.h"

/**
 * free_dlistint - a function that freeslist.
 * @head: the head of the   listst.
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
