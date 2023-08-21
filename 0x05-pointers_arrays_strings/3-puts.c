#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str:the string that will be printed
 * Return: nothing it's void
 */
void _puts(char *str)
{
	do {
		_putchar(*str + 0);
		str++;
	} while (*str != '\0');
}
