#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: amount of chars in string
 */

/* changed temporarily to const char * */
int _strlen(const char *s)
{
	int length = 0;

	for (; *s; s++)
	{
		length++;
	}

	return (length);
}

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of string
 * as a parameter.
 * @str: string to be copied and used to determine size
 * Return: pointer to first address in space created
 */
/* changed temporarily to const char * */
char *_strdup(const char *str)
{
	int size;
	int i;
	char *p;

	if (!str)
		return (NULL);

	size = (_strlen(str) + 1);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
/**
 * add_node_end - adds new node at end of struct type
 * list_t linked list
 * @head: pointer to pointer to first member of list
 * @str: string to be added as member str of new list_t
 * Return: address of new member or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (!head && !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = _strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
