#include "lists.h"
/**
 * *get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer
 * @index: the index of the node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *t = head;

while (t && j < index)
{
t = t->next;
j++;
}
return (t ? t : NULL);
}
