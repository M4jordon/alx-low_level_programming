#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if character is lower case
 * @c: character to be checked
 *
 * Return: 1 if char c is lower case, 0 if it is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
