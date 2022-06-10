#include "main.h"
/**
 * print_diagonal - prints a diagonaline of n
 * @n: length indicator integer
 */
void print_diagonal(int n)
{
	int i;
	char c;
	char s;

	s = 32;
	c = 92;
	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(s);
		}
		_putchar(c);
	}
	c = 10;
	_putchar(c);
}
