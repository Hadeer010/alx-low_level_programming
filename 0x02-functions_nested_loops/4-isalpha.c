#include "main.h"
/**
 *_isalpha - shows if the letter
 * is in alphacase or not
 * @c: is the character of ASCII Code
 * Return: 1 for alpha and . 0 for lower
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
