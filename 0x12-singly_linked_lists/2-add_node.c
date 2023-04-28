#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 * Return: amount of chars in string
* changed temporarily to const char
 */
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
 * _strdup - returns pointer to newly allocated
 * space in memory, which contains a copy of the string
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
 * add_node - adds a new node at the start of a struct type list_t linked list
 * @head: pointer to pointer to first member of list
 * @str: string to be added as member str of new list_t
 * Return: address of new member, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!head && !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = _strdup(str);
	/* iterating 8*/
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);

	new_node->next = *head;

	*head = new_node;
	
	return (new_node);
}
