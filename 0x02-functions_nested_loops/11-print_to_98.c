#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d%c%c", i, 44, 32);
		}
	}
	else
	{
		i = n;
		while (i != 98)
		{
			printf("%d%c%c", i, 44, 32);
			i--;
		}
	}
	printf("%d\n", 98);
}
