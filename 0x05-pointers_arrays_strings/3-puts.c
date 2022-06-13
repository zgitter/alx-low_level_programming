#include "main.h"
/**
 * _puts - takes the address of a string and prints it
 * @str: points to the string to be printed
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
