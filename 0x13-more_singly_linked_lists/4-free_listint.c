#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that free a list
 * @head: head of the list
 * Return: 0 success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
