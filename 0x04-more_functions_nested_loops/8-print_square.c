#include "main.h"
/**
 * print_square - prints a square of sizze n
 * @n: the size of the square
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
