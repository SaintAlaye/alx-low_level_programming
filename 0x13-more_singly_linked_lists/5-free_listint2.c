#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that free a list
 * @head: head of the list
 * Return: set the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
