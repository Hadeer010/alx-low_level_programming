#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
