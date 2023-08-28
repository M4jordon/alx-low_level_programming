#include "main.h"

/**
 * _memcpy - copies n bytes of memory from source to destination
 * @dest: destination
 * @src: cource
 * @n:; number of bytes
 * return pointer to dest
 */

char *_memcpy( char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i < 1; i < size; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
	}
}

