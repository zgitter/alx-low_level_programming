#include "main.h"

/**
 * _isalpha - checks if char is upper case
 *
 * Return: 1 if lower, else 0
 *
 * @c: is an integer input parameter
 */
int _isalpha(int c)
{
	int i;
	int t;

	t = 0;
	for (i = 65; i < 123; i++)
		if (c == i)
		{
			t = 1;
			break;
		}
	return (t);
}
