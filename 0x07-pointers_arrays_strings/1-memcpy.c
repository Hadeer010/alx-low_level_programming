#include "main.h"
/**
 * _memcpy - a function that copy memory site
 * @dest: memory
 * @src: source
 * @n: the length of to be copied
 * Return: the pointer in dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int un;

	for (un = 0; un < n; un++)
	{
		dest[un] = src[un];
	}
	return (dest);
}
