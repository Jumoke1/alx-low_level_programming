#include "lists.h"
/**
 * pop_listint - a function that deletes head of a node
 * @head: pointer
 * Return: head node or 0 if empty
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;

return (num);
}
