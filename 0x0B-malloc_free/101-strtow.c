#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * strtow - Splits a string into words
 * @str: String to be splited
 * Description: Each element of the array should contain a single word
 *	The last element of the returned array is NULL
 *	Words are seperated by spaces
 * Return: Null if str is NULL or str is ""
 *	NULL if there is no space
 */
char **strtow(char *str)
{
	char **words, *pos = str;
	int w = 0, c;

	if (!(str && *str))
		return (NULL);
	do {
		while (isspace(*pos))
			++pos;
		if (!*pos)
			break;
		while (*(++pos) && !isspace(*pos))
			;
	} while (++w, *pos);
	if (!w)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (w + 1));
	if (!words)
		return (NULL);
	w = 0, pos = str;
	do {
		while (isspace(*pos))
			++pos;
		if (!*pos)
			break;
		for (str = pos++; *pos && !isspace(*pos); ++pos)
			;
		words[w] = (char *) malloc(sizeof(char) * (pos - str + 1));
		if (!words[w])
		{
			while (w >  0)
				free(words[--w]);
			free(words);
			return (NULL);
		}
		for (c = 0; str < pos; ++c, ++str)
			words[w][c] = *str;
		words[w][c] = '\0';
	} while (++w, *pos);
	words[w] = NULL;
	return (words);
}
