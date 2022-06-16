#include "main.h"
/**
 * _strncat - concatnates by taking just n bytes
 * @src: the source of string
 * @dest: the destination of the string
 * @n: the n bytes to append
 * Return: returns the pointer for dest
 */
char *_strncat(char *dest, char *src,int n)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (*(dest + i) != 0)
	{
		i++;
	}
	while ((*(src + j) != 0) && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}	
	return (dest);
}
