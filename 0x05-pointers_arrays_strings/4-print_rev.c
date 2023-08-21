#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * @s: input
 * Return: nothing as it's void
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	while (x--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
