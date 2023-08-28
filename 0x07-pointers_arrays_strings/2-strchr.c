#include "main.h"
/**
 * _strchr  - function that fills memory with a contstant byte
 * @s: pointer to contain the constant
 * @c: a constant
 * Return: pointer in s
 */
char *_strchr(char *s, char c)
{
	int un;

	for (un = 0; s[un] >= '\0' ; un++)
	{
		if (s[un] == c)
		{
			return (s + un);
		}
	}
	return ('\0');
}
