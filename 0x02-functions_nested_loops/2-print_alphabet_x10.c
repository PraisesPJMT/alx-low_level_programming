#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet_x10 - prints alphabets 10 times
 * returns 0 if successful.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char str;

		for (str = 'a'; str <= 'z'; str++)
			_putchar(str);
		_putchar('\n');
		i++;
	}
	return (0);
}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
