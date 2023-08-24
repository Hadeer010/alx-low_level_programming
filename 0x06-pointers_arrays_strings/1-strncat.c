#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: pointer
 * @src: pointer that point to source
 * @n: number of bytes from src
 * Return: dest value
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src [y];
	}
	dest[x + y] = '\0';

	return (dest);
}
