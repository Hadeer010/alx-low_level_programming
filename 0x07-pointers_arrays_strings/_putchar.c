#include <unistd.h>
/**
 * _putchar - write function
 * @c: is input
 * Return: -1 is returned when errer,
 * for success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
