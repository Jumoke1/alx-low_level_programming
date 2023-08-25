#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * @head: pointer to the head
 * @index: index of the node
 * Return: 1 if it succeeded, or  -1
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *newnode = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (newnode == NULL)
			return (-1);
		newnode = newnode->next;
	}
	if (newnode == *head)
	{
		*head = newnode->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		newnode->prev->next = newnode->next;
		if (newnode->next != NULL)
			newnode->next->prev = newnode->prev;
	}
	free(newnode);
	return (1);
}
