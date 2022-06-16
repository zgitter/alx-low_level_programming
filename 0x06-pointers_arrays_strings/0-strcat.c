#include "main.h"
/**
 * strcat - concatnates strings
 * @src: the source of string
 * @dest: the destination of the string
 * Return: returns the pointer for dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	char *dp;

	/*dp = dest;*/
	j = 0;
	i = 0;
	while (*(dest + i) != 0)
	{
		/*(dp + i) = *(src + i);*/
		i++;
	}
	while (*(src + j) != 0)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	
	/*(dp + i + 1) = '\0';*/
	return (dest);
}
