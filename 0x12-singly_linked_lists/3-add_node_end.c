#include "lists.h"

/**
 * add_node_end - Adds new node at the end of a list_t list
 * @head: Address to the linked list_t list
 * @str: Data to be added to linked list_t list
 *
 * Return: Address of the new element
 *		NULL if it fails
 * Description: str needs to be duplicated
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *pointer;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	pointer = *head;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = add;
	return (add);
}

/**
 * _strlen - Finds the length of a string.
 * @s : s is a character
 *
 * Return: Length of string s
 */
int _strlen(const char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
