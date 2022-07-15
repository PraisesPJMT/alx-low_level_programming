#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list_t list
 * @h: Pointer to linked list_t list
 *
 * Return: Number of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
