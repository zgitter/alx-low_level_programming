#include "main.h"
/**
 * print_last_digit - prints the last digit of any digit num
 * @n: the input parameters whose last digit is to be found
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
		d = -d;
	}
	_putchar('0' + d);
	return (d);
}
