#include "main.h"
/**
 * _strncpy - concatnates by taking just n bytes
 * @src: the source of string
 * @dest: the destination of the string
 * @n: the n bytes to append
 * Return: returns the pointer for dest
 */
char *_strncpy(char *dest, char *src,int n)
{
	int j;

	j = 0;
	while ((*(src + j) != 0) && j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}	
	return (dest);
}
