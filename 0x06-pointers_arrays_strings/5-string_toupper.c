#include "main.h"
/**
 * string_toupper - converts to UPPER-CASE
 * @s: the string to convert
 * Return: retuturns the a poiter to the converted
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
