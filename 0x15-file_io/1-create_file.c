#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be
 * created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int me;
	int myletters;
	int res;

	if (!filename)
		return (-1);

	me = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (me == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (myletters = 0; text_content[myletters]; myletters++)
		;

	res = write(me, text_content, myletters);

	if (res == -1)
		return (-1);

	close(me);

	return (1);
}
