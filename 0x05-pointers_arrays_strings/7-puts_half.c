#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 * Return: lengt
 */
void puts_half(char *str)
{
	int x = 0;

	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}
