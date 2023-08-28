
#include <unistd.h>

/*
 * _putchar: writes character c in stdout
 * @c: character to be written
 *
 * prints 1 on success
 * on failure prints -1 and corresponding errno
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
