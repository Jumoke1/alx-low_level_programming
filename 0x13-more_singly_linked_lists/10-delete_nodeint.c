#include "lists.h"
/**
 * delete_nodeint_at_index - a function the node at index
 * @head: pointer
 * @index: index
 * Return: 1 if succed or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t  *j = *head;
listint_t *nodeA  = NULL;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(j);
return (1);
}
while (i < index - 1)
{
if (j == NULL || j->next == NULL)
return (-1);
j = j->next;
i++;
}
nodeA = j->next;
j->next = nodeA->next;
free(nodeA);
return (1);
}
