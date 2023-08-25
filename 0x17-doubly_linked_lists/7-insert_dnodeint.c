#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert new node
 * @h: pointer to the head
 * @idx: the position to insert
 * @n: integer
 * Return: address of the new node
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode1, *newnode2;

	newnode2 = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		newnode2 = newnode2->next;
		if (newnode2 == NULL)
			return (NULL);
	}
	if (newnode2->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode1 = malloc(sizeof(dlistint_t));
	if (newnode1 == NULL)
		return (NULL);
	newnode1->n = n;
	newnode1->prev = newnode2;
	newnode1->next = newnode2->next;
	newnode2->next->prev = newnode1;
	newnode2->next = newnode1;
	return (newnode1);
}
