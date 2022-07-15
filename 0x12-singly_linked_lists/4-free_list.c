#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 * @head: Pointer to the first node of the list to free
 *
 * Return: Nothing (void)
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
