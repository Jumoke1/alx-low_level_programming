#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: the head of dlistint_t list.
 * @index: the node to locate.
 * Return: pointer to located
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
