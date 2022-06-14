#include "main.h"
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
	while (*(s + i) != 0)
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{	
		swp = s[j];
		*(s + j) = *(s + i - j);	
		*(s + i - j) = swp;
	}
}
