#include "main.h"
/**
 *puts2 - takes the address of a string and prints it in rev
 * @str: points to the string to be reverse printed
 */
void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (2 * j < i)
		{
		_putchar(*(str + 2 * j));
		}
	}	
	_putchar(10);
}
