#include "main.h"
/**
 * _strlen -  a function that returns the length of a string.
 * @s: is a string
 * Return: the length of an integer
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
		return (length);
	}
}
