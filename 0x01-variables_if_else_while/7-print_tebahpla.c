#include<stdio.h>
/**
 * main - This main generates z-a
 * Return: returns 0 if main  runs right otherwise 1
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	c = 10;
	putchar(c);
	return (0);
}
