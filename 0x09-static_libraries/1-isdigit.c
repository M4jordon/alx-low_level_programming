#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 * Return: 1 if it is a digit or 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
