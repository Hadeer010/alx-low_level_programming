#include "variadic_functions.h"
/**
 * print_strings - prints strings with seperator
 * @separator: the strinf seperator
 * @n: arguments numbers
 * @...: the string to print
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				x ? (separator ? separator : "") : "\n");
	va_end(ap);
}
