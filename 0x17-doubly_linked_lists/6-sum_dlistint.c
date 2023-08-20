#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 * @head: the head of  dlistint_t list.
 * Return: sum
 */


int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
