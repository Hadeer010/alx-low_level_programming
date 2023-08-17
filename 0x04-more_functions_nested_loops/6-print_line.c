#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: inputi
 * Return1 if successful and a new line if not
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i < 0; i--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
		_putchar('\n');
}
