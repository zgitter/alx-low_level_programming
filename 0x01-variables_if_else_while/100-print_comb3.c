#include<stdio.h>
/**
 * main - This main prints 1 digit comb
 * Return: returns 0 if main  runs right otherwise 1
 */
int main(void)
{
	int c;
	int b;

	for (c = 0; c < 10; c++)
	{
		putchar(c + 48);
		for ( b = 0; b < 10; b++)
		{
			if ( c != b)
			{
				putchar(b + 48);
				if (!(b == 9 && c == 9))
				{
					putchar(44);
					putchar(32);
				}
		}
	}
}
	putchar(10);
	return (0);
}
