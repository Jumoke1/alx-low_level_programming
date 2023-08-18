#include "lists.h"
#include <string.h>

/*
 * *add_dnodeint_end - function to add node at the end
 * @n: integer
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
if (n == NULL)
{
dlistint_t *new
unsigned int len = 0;
}

while (n[len])
len++;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL)

new->prev = NULL
new->len = len
new->next = (*head)
(*head) = new;

return (new);
