#include "lists.h"
#include <stdio.h>

/**
 * free_list - a function that free a list
 * @head: member
 */
void free_list(list_t *head)
{
list_t *current;

while (head != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current);
}
}
