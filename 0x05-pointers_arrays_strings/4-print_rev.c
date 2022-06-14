#include "main.h"
/**
 * print_rev - takes the address of a string and prints it in rev
 * @str: points to the string to be reverse printed
 */
void print_rev(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(*(str + j));
	}
	_putchar(10);
}
