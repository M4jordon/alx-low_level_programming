#include "main.h"

/**
 * _isalpha - checks if a charcater is an alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is an alphabet and 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
