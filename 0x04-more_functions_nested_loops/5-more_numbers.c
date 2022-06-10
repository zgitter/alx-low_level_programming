#include "main.h"
/**
 * more_numbers - prints 1-14 more times
 */
void more_numbers(void)
{
	int i;
	int j;
	char c;
	int k = 49;

	for (j = 1; j < 11; j++)
	{
		for (i = 48; i < 63; i++)
		{
			if (i < 58)
			{
				c = i;
			}
			else
			{
				c = k;
				_putchar(c);
				c = i - 10;
			}
			_putchar(c);

		}
		c = 10;
		_putchar(c);
	}
}
