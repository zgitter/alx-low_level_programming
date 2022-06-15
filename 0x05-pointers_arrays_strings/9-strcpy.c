#include "main.h"
/**
 * strcpy - copies a string
 * @src: the source of string
 * @dest: the destination of the string
 * Return: returns the pointer for dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *dp;

	dp = dest;
	i = 0;
	while (*(src + i) != 0)
	{
		*(dp + i) = *(src + i);
		i++;
	}
	*(dp + i + 1) = *(src + i + 1);

	return dp;
}
