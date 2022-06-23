#include <string.h>
#include "main.h"

/**
  * _memcpy - Copies memory area to dest
  * @dest: Destination of memory area
  * @src: Source of memory area
  * @n: Number of intergers to copy
  * Return: Pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
