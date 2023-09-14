#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 * @separator: the string seperator
 * @n: aguments numbers
 * @...: the int to print
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap, int),
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
