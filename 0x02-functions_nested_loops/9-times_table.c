#include "main.h"
#include <stdio.h>
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i*j;
			if (j != 9)
			{
				printf("%d%c%c", r, 44, 32);
			}
			else
			{
				printf("%d", r);
			}
		}
		printf("\n");
	}
}
