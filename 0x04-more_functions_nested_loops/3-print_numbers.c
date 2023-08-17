#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Return: always 0 if successful
 */
void print_numbers(void)
{
	int n = 0;

	while (n >= 0 && n <= 9)
	{
		_putchar(n + 48);
		n++;
	}
	_putchar('\n');
}
