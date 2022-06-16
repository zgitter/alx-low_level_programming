#include "main.h"
/**
 * reverse_array - reverses array
 * @a: array to reverse
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int len;

	i = 0;
	len = n / 2;
	for ( ; len > 0; len--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
