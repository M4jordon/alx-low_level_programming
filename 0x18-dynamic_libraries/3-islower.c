#include <stdio.h>
#include "main.h"

/*
 * _islower chaecks if character is lower case
 * @c: character to be checked
 *
 * returns 1 if char c is lower case, 0 if it is uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
}
	
