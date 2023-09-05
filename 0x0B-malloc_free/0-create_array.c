#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars
 * @size: araay size
 * @c: char to assign
 * Return: pointer to arrray or NULL if not successed
 */
char *create_array(unsigned int size, char c)
{
	char *nchar = malloc(sizeof(char) * size);

	if (size == 0 || nchar == 0)
	{
		return (0);
	}
	while (size--)
	{
		nchar[size] = c;
	}
	return (nchar);
}
