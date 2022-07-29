#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: name of the file
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_check, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; *(text_content + i); i++)
			;
		w_check = write(fd, text_content, i);
		if (w_check == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
