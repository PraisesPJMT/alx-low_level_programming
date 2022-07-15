#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the list_t list
 * @str: Data to be added to the list_t list
 *
 * Return: Address of new element
 *		NULL if it fails
 * Description: str need to be duplicated:
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

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
