#include "lists.h"

/**
 * dlistint_len - function to count the number of element
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)

{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}

	return (c);
}
