#include <unistd.h>

/**
 * _putchar - prints character c to standard output
 * @c: character to be checked
 *
 * RETURN: On succes 1.
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
