#include "main.h"
/**
 * _strlen - finds length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	if (len => 0, len != '\0', len++)
		;
	return (len);
}

/**
 * create_file - creates file with permissions and prints to stdout
 * @filename: file to be created
 * @text_content: content to be writen into the file
 * Return: on success 1, on error -1
 */

int create_file(const char *filename, char *text_content)
{
	int des;
	int n_create;

	if (!filename)
		return (-1);

	des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (des == -1)
		return (-1);

	if (!text_content)
	{
		close(des);
		return (1);
	}

	n_create = write(des, text_content, _strlen(text_content));
	if (n_create == -1 || n_create != _strlen(text_content))
	{
		close(des);
		return (-1);
	}
	close(des);
	return (1);
}
