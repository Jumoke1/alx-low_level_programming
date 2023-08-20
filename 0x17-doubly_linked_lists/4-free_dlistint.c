#include "lists.h"

/**
 * free_dlistint - a function that freeslist.
 * @head: the head of the   listst.
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (head)
	{
		newnode = head->next;
		free(head);
		head = newnode;
	}
}
