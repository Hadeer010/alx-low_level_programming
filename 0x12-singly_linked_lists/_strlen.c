#include <stdio.h>
#include "lists.h"
/**
 * _strlen - returns the string length
 * @s: the string
 * Return: the string length
 */
int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}
