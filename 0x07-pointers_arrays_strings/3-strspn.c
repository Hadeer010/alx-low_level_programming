#include "main.h"
/**
 * _strspn - a function that get the length of prefix
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int un, x;

	for (un = 0; s[un] != '\0'; un++)
	{
		for (x = 0; accept[x] != s[un]; x++)
		{
			if (accept[x] == '\0')
			{
				return (un);
			}
		}
	}
	return (un);
}
