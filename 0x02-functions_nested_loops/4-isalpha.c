#include "main.h"

/**
  * _isalpha - Check for alphabets
  * @c: input for test
  * Return: 1 if c is a letter
  *         0 otherwise
  */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
