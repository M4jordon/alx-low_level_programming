#include "main.h"

/**
 * read_textfile - read a certain size and prints to std  output
 * @filename - the file to read from
 * @letters: size  to read
 * Return: actual size read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int des; /* file descriptor */
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	des = open(filename, O_RDONLY);
	if (des == -1)
		return (0);

	buffer = malloc(sizeof(char) *letters);
	if (buffer == NULL)
		return (0);

	n_read = read(des, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(des);
		return (0);
	}

	close(des);
	return (n_read);
}
