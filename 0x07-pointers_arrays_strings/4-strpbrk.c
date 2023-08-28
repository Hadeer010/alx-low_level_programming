#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: string
 * @accept: string to
 * Return: pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int un, x;
	char *w;

	un = 0;
	while (s[un] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (accept[x] == s[un])
			{
				w = &s[un];
				return (w);
			}
			x++;
		}
		un++;
	}
	return (0);
}
