#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet - prints alphabets 10 times
 * returns 0 if successful.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
		_putchar(str);
	_putchar('\n');
	
	return (0);
}
int main(void)
{
	print_alphabet();
	return (0);
}
