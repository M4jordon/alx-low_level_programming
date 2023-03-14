#include <unistd.h>

/**
 * _putchar - puts in characters
 * @c:character to be checked
 *
 * return, On success (1)
 * on error, -1 is returned and appropriate errno is set
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
