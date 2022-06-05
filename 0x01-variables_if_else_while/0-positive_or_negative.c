#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/**
 * main - Generates a random number and checks sign
 * @n: The generated number
 * Return: 0 if the function runs correctly or 1 if not
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
