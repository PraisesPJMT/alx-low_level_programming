#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Description: Function that prints
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (i < strlen(str))
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
