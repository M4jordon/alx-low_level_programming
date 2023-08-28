#include <stdio.h>
#include "main.h"

/*
 * _isupper: checks if a character is uppercase
 * @c: character to be checked
 *
 * returns 1 on success and -1  with corresponding errno on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}