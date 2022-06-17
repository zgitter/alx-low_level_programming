#include "main.h"
/**
 * _strcat - concatnates strings
 * @src: the source of string
 * @dest: the destination of the string
 * Return: returns the pointer for dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j

	j = 0;
	i = 0;
	while (*(dest + i) != 0)
	{
		i++;
	}
	while (*(src + j) != 0)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	
	return (dest);
}
