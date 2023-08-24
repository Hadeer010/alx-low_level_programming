#include "main.h"
/**
 * _strncpy - concatenates two strings.
 * @dest: pointer
 * @src: pointer that point to source
 * @n: number of bytes from src
 * Return: dest value
 */
char *_strncpy(char *dest, char *src, int n);
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++
	}
	return (dest);
}
