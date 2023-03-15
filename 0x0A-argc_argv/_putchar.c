#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: character to be checked
 *
 * Return:On success (1)
 * On error, -1is returned and the appropriate errno is set
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
