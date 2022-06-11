#include<stdio.h>
/**
 * main - This main prints hexadeci-mals
 * Return: returns 0 if main  runs right otherwise 1
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	c = 10;
	putchar(c);
	return (0);
}
