#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 * Return: always 0 if successful
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n >= 0 && n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + 48);
		}
		n++;
	}
	_putchar('\n');
}
