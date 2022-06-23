#include <string.h>
#include "main.h"

/**
  * _memset - Fills memory with a constant byte b
  * @s: Char address to be filled
  * @b: Byte to fill
  * @n: number of interger times to fill
  * Return: Pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
