#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: pointer
 * @src: pointer that point to source
 * Return: pointers
 */
char *_strcat(char *dest, char *src)
{
	int x, x0;

	x = 0;
	while (dest[x])
	{
		x++;
	}
	for (x0 = 0; src[x0] ; x0++)
	{
		dest[x++] = src[x0];
	}
	return (dest);
}
