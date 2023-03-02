#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int tmp, strt = 0;
	int end = n - 1; /* omit null terminator in length */

	while (strt < end)
	{
		tmp = *(a + strt);
		*(a + strt) = *(a + end);
		*(a + end) = tmp;
		strt++, end--;
	}
}
