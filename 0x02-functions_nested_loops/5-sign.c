#include "main.h"
/**
 * print_sign - shows if te number type
 * if it's greater, small or equal to zero
 * @n: the number
 * Return: 1 if the num is greater than zero,
 * -1 is less than zero
 * and 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
