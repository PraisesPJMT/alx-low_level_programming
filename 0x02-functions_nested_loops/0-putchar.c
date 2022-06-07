#include "main.h"

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

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
