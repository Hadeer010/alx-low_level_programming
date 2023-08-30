#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string pointer
 * Return: an integer
 */
int _strlen_recursion(char *s)
{
	int un = 0;

	if (*s > '\0')
	{
		un += _strlen_recursion(s + 1) + 1;
	}
	return (un);
}
