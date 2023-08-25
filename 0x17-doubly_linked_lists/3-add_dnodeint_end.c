#include "lists.h"

/**
 * add_dnodeint_end - function to adds a new node at the end
 * @head: pointer to the head
 * @n: the integer
 * Return: the address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode1, *newnode2;

	newnode1 = malloc(sizeof(dlistint_t));
	if (newnode1 == NULL)
		return (NULL);

	newnode1->n = n;
	newnode1->next = NULL;
	if (*head == NULL)
	{
		newnode1->prev = NULL;
		*head = newnode1;
		return (newnode1);
	}
	newnode2 = *head;
	while (newnode2->next != NULL)
		newnode2 = newnode2->next;
	newnode2->next = newnode1;
	newnode1->prev = newnode2;
	return (newnode1);
}
