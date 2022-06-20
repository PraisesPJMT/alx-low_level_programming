#include <string.h>
#include "main.h"

/**
  * _strstr - Locates the first occurance of needle in haystack
  * @haystack: String to search through
  * @needle: String to locate
  * Return: A pointer to the beginning of the located
  *	substring, or NULL if the substring is not
  *	found
  */
char *_strstr(char *haystack, char *needle)
{
	char *locSubstr;

	locSubstr = strstr(haystack, needle);
	return (locSubstr);
}
