#include "main.h"
/**
 * _islower - show if the input the user enter
 * is a lowercase or not
 * @c: is the character of ASCII Code
 * Return: 0 for rest and . 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
