#include "main.h"
/**
 * print_rev - takes the address of a string and prints it in rev
 * @s: points to the string to be reverse printed
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	j = i - 1;
	while (*(s + j) != 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar(10);
}
