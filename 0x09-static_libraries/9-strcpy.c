#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _strcpy - Copies strings to src
  * @src: Input string to be copied
  * @dest: Destination of copied string
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
