#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: Display all aphabets in lower case except q and e
  *
  * Return: Zero (0)
  */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		if (!(str == 'e' || str == 'q'))
			putchar(str);
	}
	putchar('\n');
	return (0);
}
