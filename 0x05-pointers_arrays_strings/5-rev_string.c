#include "main.h"
#include <stdio.h>
/**
 * rev_string - takes the address of a string and reverses it
 * @s: points to the string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int j;
	char swp;

	i = 0;
	j = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	while (j < i)
	{	
		swp = s[j];
		*(s + j) = *(s + i - j - 1);
		*(s + i - j - 1);
		j++;
	}
	printf("i (%d) and j (%d) plus swp (%c)\n", i, j, swp);
}
