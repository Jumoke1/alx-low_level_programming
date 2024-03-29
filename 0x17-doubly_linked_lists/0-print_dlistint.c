#include "lists.h"

/**
 * print_dlistint - function that prints a doubly linked list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t c = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}

return (c);
}
