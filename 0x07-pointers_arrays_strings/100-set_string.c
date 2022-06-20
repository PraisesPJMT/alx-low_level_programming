#include "main.h"

/**
  * set_string - Set the value of a pointer to a char
  * @s: String to be set
  * @to: String to change
  * Return: Void (Nothing)
  */
void set_string(char **s, char *to)
{
	*s = to;
}
