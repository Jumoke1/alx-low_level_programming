#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum 
 * @head: the head of  dlistint_t list.
 *
 * Return: sum 
 */


int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
