#include "main.h"
/**
 * puts_half - takes the address of a string and half prints it
 * @str: points to the string to be half printed
 */
void puts_half(char *str)
{
	int i;
	int n;
	int j;

	i = 0;
	j = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		while (*(str + n + j) != 0)
		{
			_putchar(*(str + n + j));
			j++;
		}
	}
	else
	{
		n = (i - 1) / 2;
		while (*(str + n + j + 1) != 0)
		{
			_putchar(*(str + n + j + 1));
			j++;
		}
	}
	_putchar(10);

}
