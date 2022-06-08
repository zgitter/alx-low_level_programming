#include "main.h"
#include <stddef.h>
/* betty style doc for function main goes there */
int main(void)
{
	char chars[] = "_putchar\n";
	size_t l = sizeof(chars)/sizeof(chars[0]);
	int n;
	for (n = 0; n < l; n++)
		_putchar(chars[n]);
	return (0);
}
