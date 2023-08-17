#include "main.h"
/**
 * _isupper - show if the input the user enter
 * is a uppercase or not
 * @c: is the character of ASCII Code
 * Return: 0 for rest and . 1 for lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
