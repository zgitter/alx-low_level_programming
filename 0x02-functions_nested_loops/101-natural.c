#include <stdio.h>
/**
 * main - sums all multiples of 3 or 5 under 1024 exclusive
 * Return: - returns 0 when main runs right
 */
int main(void)
{
	int i;
	int sum;

	i = 3;
	sum = 0;
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
