#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)

{
        if (i < 0)
                printf("%d is negative number\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i > 0)
                printf("%d is positive number\n", i);
}
