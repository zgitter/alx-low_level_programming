#include "main.h"
/**
 * _strcmp - concatnates strings
 * @s1: the first  string
 * @s1: the second string
 * Return: returns the difference int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] != 0 || s2[i] != 0; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
}
