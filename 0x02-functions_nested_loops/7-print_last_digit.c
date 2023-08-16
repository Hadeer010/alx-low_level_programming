#include "main.h"
/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @last: the last number
 * Return: the last value
 */
int print_last_digit(int last)
{
	int n;

	n = last % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		-putchar(n + 48);
		return (n);
	}
}
