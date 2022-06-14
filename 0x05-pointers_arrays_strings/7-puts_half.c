#include "main.h"
/**
 * puts_half - takes the address of a string and prints its last half
 * @str: points to the string to be printed
 */
void puts_half(char *str)
{
	int i;
	int n;
	int j;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}

	for (j = n; j <= i; j++)
	{
		_putchar(*(str + j));
	}
	_putchar(10);
}
