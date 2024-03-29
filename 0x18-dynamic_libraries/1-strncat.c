#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
