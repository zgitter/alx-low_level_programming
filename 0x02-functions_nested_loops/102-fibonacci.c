#include <stdio.h>
/**
 * main - sums all multiples of 3 or 5 under 1024 exclusive
 * Return: - returns 0 when main runs right
 */
int main(void)
{
	long fp1;
	long fp2;
	long fn;
	long i;

	fp1 = 1;
	fp2 = 2;
	i = 3;
	printf("%ld%c%c", fp1, 44, 32);
	printf("%ld%c%c", fp2, 44, 32);
	while (i <= 49)
	{
		fn = fp1 + fp2;
		printf("%ld%c%c", fn, 44, 32);
		fp1 = fp2;
		fp2 = fn;
		i++;
	}
	fn = fp1 + fp2;
	/*printf("%d\n", sum);*/
	printf("%ld\n", fn);
	return (0);
}
