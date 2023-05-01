#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all the element of a list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
printf("%d\n", h->n)
h = h->next;
i++;
}
return (i);
}
