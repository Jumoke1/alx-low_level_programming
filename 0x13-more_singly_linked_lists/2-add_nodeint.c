#include "lists.h"
/**
 * *add_nodeint - add a node
 * @head: pointer
 * @n: int
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *a;

a = malloc(sizeof(listint_t));
if (a == NULL)
return (NULL);

a->n = n;
a->next = *head;
*head = a;

return (a);
}
