#ifndef _LISTS_H_
#define _LISTS_H_

/* All Standard Libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Type Definition of Structure */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* mandatory Tasks Prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
int _strlen(const char *s);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void myStartupFun(void) __attribute__ ((constructor));

#endif
