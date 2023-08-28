#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c in stdout
 * @c: character to be written
 *
 * Return: 1 on success
 * on failure prints -1 and corresponding errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
