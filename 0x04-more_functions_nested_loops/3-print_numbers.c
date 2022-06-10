#include "main.h"
/**
 * print_numbers - just print from 0 to 9
 */
void print_numbers(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
	{
		c = i;
		_putchar(c);
	}
	c = 10;
	_putchar(c);
}
