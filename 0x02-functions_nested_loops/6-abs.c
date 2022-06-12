#include "main.h"
/**
 * _abs - informs the sign of a number
 * @n: the number whose abs value gets returned
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = - 1 * n;
		return (n);
	}
}

