#include "main.h"
/**
 * _memset - function fills the memory with a constant byte
 * @s: pointer
 * @b: constant
 * @n: max bytes
 * Return: s pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int un;

	for (un = 0; n > 0; un++, n--)
	{
		s[un] = b;
	}
	return (s);
}
