#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - function to add node at the end of a list
 * @n: integer
 * @head: a pointer
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *newnode1 newnode2;

newnode1 = malloc(sizeof((dlistint_t));

if (newnode == NULL)
return (NULL);

newnode1->n = n
newnode1->next = NULL;

if (*head == NUL)

newnode1->prev = NULL;
*head = newnode1;
return (newnode1);

newnode2 = *head;
while (newnode2->next != NULL)
newnode2 = newnode2->next;

newnode2->next = newnode1;
newnode1->prev = newnode2;

return (newnode1);
}
