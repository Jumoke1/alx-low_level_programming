#include "lists.h"
#include <stdio.h>
/**
 * *insert_nodeint_at_index - a function that insert a node
 * @head: pointer
 * @idx: index
 * @n: int
 * Return: the addres of the nnew node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *nodeA;
listint_t *j = *head;
nodeA = malloc(sizeof(listint_t));

if (head == NULL || nodeA == NULL)
return (NULL);

nodeA->n = n;

if (idx == 0)
{
nodeA->next = *head;
*head = nodeA;
return (nodeA);
}
for (i = 0; j && i < idx; i++)
{
if (i == idx - 1)
{
nodeA->next = j->next;
j->next = nodeA;
return (nodeA);
}
else
j = j->next;
}
return (NULL);
}
