#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of file to be read
 *@letters: number of letters to print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t print = 0, rd = 0;
	int fd = 0;
	char *buf = malloc(letters);

	if (!buf)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	print = write(STDOUT_FILENO, buf, rd);
	if (print == -1 || print != rd)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (print);
}
