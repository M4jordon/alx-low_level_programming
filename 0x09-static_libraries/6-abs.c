#include "main.h"

/**
 * _abs - finds the absolute value of numbers
 * @n: integer arguement
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
