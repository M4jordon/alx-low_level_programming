#include <unistd.h>

/**
 * _putchar - writes characters in the standard output.
 * @c: character to be checked
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appriopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
