#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - a function print list
 * @h: pointer
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{

	size_t  j = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
				h = h->next;
				j++;
		}
return (j);
}
