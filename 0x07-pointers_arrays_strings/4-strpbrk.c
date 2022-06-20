#include <string.h>
#include "main.h"

/**
  * _strpbrk - Searches a string for any of a set of bytes
  * @s: String to search through
  * @accept: String to search
  * Return: Pointer to the byte in s that matches one of
  *	the bytes in accept, or NULL if no search is
  *	found
  */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
