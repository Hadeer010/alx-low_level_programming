#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 0 for false, 1 for true.
 */
int _strcmp(char *s1, char *s2)
{
	int total = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			total = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (total);
}
