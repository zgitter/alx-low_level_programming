#include "main.h"
/**
 * print_line - prints a line of length n
 */
void print_line(int n)
{
	int i;
	char c;

	c = 95;
	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
	}
	c = 10;
	_putchar(c);
}
