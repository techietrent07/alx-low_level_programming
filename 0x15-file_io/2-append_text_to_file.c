#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int me, myletters, res;

	if (!filename)
		return (-1);

	me = open(filename, O_WRONLY | O_APPEND);

	if (me == -1)
		return (-1);

	if (text_content)
	{
		for (myletters = 0; text_content[myletters]; myletters++)
			;

		res = write(me, text_content, myletters);

		if (res == -1)
			return (-1);
	}

	close(me);
	return (1);
}
