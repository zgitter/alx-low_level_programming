#include "main.h"
/**
 * cap_string - capitalizeword of string
 * @s: string to to capitalize
 * Return: returns the pointer for capitalized s
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int flag;
	char sepas[] = ",\t;\n; .!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		if ( i == 0)
		{
			flag = 1;
		}
		else
		{
			for (j = 0; sepas[j] != '\0'; j++)
			{
				if(s[i - 1] == sepas[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] -= ('a' -  'A');
			}
		}
	}
	return (s);
}
