#include "lists.h"
/**
 * dlistint_len - function to print number of linked list
 * @h:pointer to the head
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h);
{
size_t c = 0
	for (; h != NULL; h = h->next, c++;)
	{
		printf("[%u] %s\n", h->len)
	}
return (c);
