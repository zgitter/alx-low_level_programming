#include "main.h"
/**
 * print_number - prints integers
 * @n: the integer to get printed
 */
void print_number(int n)
{
	int d, i, r;

	d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	for (i = 0; n / d > 9; i++, d *= 10)
	;
	for ( ; d >= 1; n %= d, d /= 10)
	{
		r = n / d;
		_putchar('0' + r);
	}
}
