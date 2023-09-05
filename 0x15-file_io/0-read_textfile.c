#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to be read and printed
 * @letters: the number of letters it should read and print
 *
 * Return:  the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int me;
	ssize_t lena, lenb;
	char *buffer;

	if (filename == NULL)
		return (0);
	me = open(filename, O_RDONLY);
	if (me == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(me);
		return (0);
	}
	lena = read(me, buffer, letters);
	close(me);
	if (lena == -1)
	{
		free(buffer);
		return (0);
	}

	lenb = write(STDOUT_FILENO, buffer, lena);
	free(buffer);
	if (lena != lenb)
		return (0);
	return (lenb);
}
