#include <string.h>
#include "main.h"

/**
  * _strspn - Gets the length of a prefix substring
  * @s: String to search through
  * @accept: string to search
  * Return: Number of bytes the segment of s which
  *	    consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int strLength;

	strLength = strspn(s, accept);
	return (strLength);
}
