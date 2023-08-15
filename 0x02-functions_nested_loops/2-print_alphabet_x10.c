#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 * Description: 'print lowercase alphabet 10 times'
 * Return: 0 always (no errors)
 */
void print_alphabet_x10(void)
{
	int num;
	char i;

	for (num = 1; num <= 10; num++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
