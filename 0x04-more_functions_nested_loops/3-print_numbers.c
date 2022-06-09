#include "main.h"

/**
  * print_numbers - Print numbers from 0 - 9
  * Description: Use only _putchar twice
  * Return: void
  */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
