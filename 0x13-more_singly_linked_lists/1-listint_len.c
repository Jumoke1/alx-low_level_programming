#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number of element in a list
 * @h: pointer
 * Return: the number of node
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h != NULL)
{
h = h->next;
i++
}
return (i);
}
