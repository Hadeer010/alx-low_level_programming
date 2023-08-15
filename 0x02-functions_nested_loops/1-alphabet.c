#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints lowercase alphabets
 * Description: 'print lowercase alphabet'
 * Return: 0 always (no errors)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
