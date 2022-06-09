#include "main.h"

/**
 * _isupper - checks if char is upper case
 *
 * Return: 1 if upper, else 0
 * 
 * @c: is an integer input parameter
 */
int _isupper(int c)
{
	int i;
	int t;

	i = 65;
	t = 0;
	while (i < 91)
		if (c == i)
		{
			t = 1;
			break;
		}
		else
		{
			i++;
		}
	return (t);
}
