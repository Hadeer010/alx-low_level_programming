#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \
 * should be printed
 */
void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (s = 0; s < n; s++)
			{
				if (p == s)
				{
					_putchar(92);
				}
				else if (p < s)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
