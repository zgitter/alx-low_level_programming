#include "main.h"
/**
 * _strlen - takes the address of a string and returns its length
 * @s: points to the string to be counted
 * Return: returns the length of the string s points to
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
