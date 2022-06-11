#include<stdio.h>
/**
 * main - This main generates a - z then A-Z
 * Return: returns 0 if main  runs right otherwise 1
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	c = 10;
	putchar(c);
	return (0);
}
