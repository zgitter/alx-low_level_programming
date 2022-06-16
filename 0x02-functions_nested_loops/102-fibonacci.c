#include <stdio.h>
/**
 * main - sums all multiples of 3 or 5 under 1024 exclusive
 * Return: - returns 0 when main runs right
 */
int main(void)
{
	int fp1;
	int fp2;
	int fn;
	int i;

	fp1 = 1;
	fp2 = 2;
	i = 3;
	printf("%d%c%c", fp1, 44, 32);
	printf("%d%c%c", fp2, 44, 32);
	while (i <= 50)
	{
		fn = fp1 + fp2;
		printf("%d%c%c", fn, 44, 32);
		fp1 = fp2;
		fp2 = fn;
		i++;
	}
	/*printf("%d\n", sum);*/
	printf("\n");
	return (0);
}
