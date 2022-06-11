#include "main.h"
/**
 * print_sign - informs the sign of a number
 * @n: the number whose sign needs checkup
 */
int print_sign(int n)
{
	if (n)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (0);
	}
}

