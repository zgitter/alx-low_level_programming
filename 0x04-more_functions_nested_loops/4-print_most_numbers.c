#include "main.h"
/**
 * print_numbers - just print from 0 to 9
 */
void print_most_numbers(void)
{
	int i;
	char c;

	for (i = 48; i < 58; i++)
	{
		if (!(i == 50 || i == 52))
		{
			c = i;
			_putchar(c);
		}
	}
	c = 10;
	_putchar(c);
}
