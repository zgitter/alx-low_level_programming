#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of array
 * @a: the array to be printed
 * @n: the number of elements to print from a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			printf("\n");
		}
		else
		{
			printf("%c%c", 44, 32);
		}
	}
}
	
