#include "main.h"
/**
 * leet - concatnates strings
 * @s: the source of string
 * Return: returns the pointer for leeted s
 */
char *leet(char *s)
{
	int i;
	int j;

	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";
	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == s1[j] || s[i] == s2[j])
			{
				s[i] = s3[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
