#include "main.h"
/**
 *swap_int - takes the addresses of 2 ints and swaps their values
 * @a: points to the first var to be swapped
 * @b: points to the second var to be swapped
 */
void swap_int(int *a, int *b)
{
	int swapper = *a;
	*a = *b;
	*b = swapper;
}
