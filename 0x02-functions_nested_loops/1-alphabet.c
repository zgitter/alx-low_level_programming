#include "main.h"
/**
 * print_alphabet - calls putchar to give AZ
 *
 */
void print_alphabet(void)
{
	char c;
	int n;

	for (n = 97; n < 123; n++)
	{
		c = n;
		_putchar(c);
	}
	c = 10;
	_putchar(c);
}
