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
	int l;

	i = 0;
	j = 0;
	while (*(s + i) != 0)
	{
		i++;
	}

	l = i;

	while (j < l / 2)
	{
		swp = s[j];
		s[j] = s[l - j - 1];
		s[l - j - 1] = swp;
		j++;
	}
	/*printf("i (%d) and j (%d) plus swp (%c)\n", i, j, swp);*/
}
