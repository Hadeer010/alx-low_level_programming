#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: number inputed
 */
void print_to_98(int n)
{
	int c;

	if (n < 98)
	{
		for (c = n; c <= 98; c++)
		{
			_putchar(c);
		}
	}
	else
	{
		for (c = n; c > 98; c--)
		{
			_putchar(c);
		}
	}
}
