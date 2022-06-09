#include "main.h"

/**
 * _isdigit - checks if char is a digit
 *
 * Return: 1 if upper, else 0
 *
 * @c: is an integer input parameter
 */
int _isdigit(int c)
{
	int i;
	int t;

	i = 48;
	t = 0;
	while (i < 58)
		if (c == i)
		{
			t = 1;
			break;
		}
		else 
			i++;
	return (t);
}
