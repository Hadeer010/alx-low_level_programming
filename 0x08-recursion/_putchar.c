#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c:to print the character
 * Return: -1 is when error, and 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
