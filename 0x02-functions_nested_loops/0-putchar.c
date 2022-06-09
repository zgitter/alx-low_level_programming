#include "main.h"
#include <stddef.h>
/**
 * main - Calls __putchar to print string
 *
 * Return: returns 0 on success
 */
int main(void)
{
	char chars[] = "_putchar";
	size_t a_size = sizeof(chars) / sizeof(chars[0]);
	int l = a_size;
	int n;

	for (n = 0; n < l; n++)
		_putchar(chars[n]);
	return (0);
}
