#include <string.h>
#include "main.h"

/**
 * is_palindrome - Returns 1 is string s is palindrom or 0 if not
 * @s: String to be checked if is palindrome
 * Return: 1 if s is palindrome
 *	0 if otherwise
 */
int is_palindrome(char *s)
{
	int strIndLen;

	strIndLen = strlen(s) - 1;
	if (strlen(s) == 0)
	{
		return (1);
	}
	return (palindrome_check(0, strIndLen, s));
}

/**
 * palindrome_check - Check if str is palindrome
 * @index: Index of characters in string str
 * @revStrInd: Reverse index of characters in string str
 * @str: String to check if is palindrome
 * Return: 1 if str is palindrome
 *	0 if otherwise
 */
int palindrome_check(int index, int revStrInd, char *str)
{
	if (str[index] != str[revStrInd])
	{
		return (0);
	}
	else if (index >= revStrInd)
	{
		return (1);
	}
	else
	{
		return (palindrome_check(index + 1, revStrInd - 1, str));
	}
}
