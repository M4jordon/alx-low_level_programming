#include <stdio.h>

/**
 * main - print double num pair '00 01' - '99 98' witout duplicates
 * Return: 0
 */

int main(void)
{
	int tens;
	int ones;
	int n;
	int i;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (n = tens; n <= '9'; n++)
			{
				for (i = ones; i <= '9'; i++)
				{
					putchar(tens);
					putchar(ones);
					putchar(n);
					putchar(i);

					if (!((tens == '9' && ones == '9') && (n == '9' && i == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				i = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
