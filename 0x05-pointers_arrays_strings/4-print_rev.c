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
	for (j = i; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar(10);
}
