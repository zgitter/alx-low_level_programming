#include "main.h"
/**
 * _abs - informs the sign of a number
 * @n: the number whose abs value gets returned
 * Return: returns the ans of @n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}

