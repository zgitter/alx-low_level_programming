#include "main.h"
/**
 * print_alphabet_x10 - calls putchar to print AZ 10X
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int n;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 97; n < 123; n++)
		{
			c = n;
			_putchar(c);
		}
	c = 10;
	_putchar(c);
	}
}
