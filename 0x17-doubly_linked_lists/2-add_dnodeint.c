#include "lists.h"

/**
 * add_dnodeint - a function add a node
 * @head: a pointer to the head
 * @n: the integer
 * Return: a pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;

dlistint_t *newnode = malloc(sizeof(dlistint_t));

if (newnode == NULL)
return (NULL)

newnode->n = n;
newnode->prev = NULL;
newnode->next = *head;

if (*head != NULL)
(*head)->prev = newnode;

*head = newnode;

return (newnode);
}
