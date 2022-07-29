#include "main.h"

/**
 *err_cls - prints error for close condition
 *@file: file that couldn't be closed
 *Return: nothing
 */
void err_cls(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}

/**
 *main - Entry point of program
 *Description: copies the content of a file to another file
 *Usage: cp file_from file_to
 *@argc: amount of arguments
 *@argv: array holding each argument passed
 *Return: 0
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int f1, f2, r_cnt, w_chk;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r_cnt = read(f1, buffer, sizeof(buffer))) > 0)
	{
		w_chk = write(f2, buffer, r_cnt);
		if (w_chk == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r_cnt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f1) == -1)
		err_cls(argv[1]);
	if (close(f2) == -1)
		err_cls(argv[2]);
	return (0);
}
