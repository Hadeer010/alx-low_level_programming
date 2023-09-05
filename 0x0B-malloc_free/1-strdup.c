#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: araay of char
 * Return: Null
 */
char *_strdup(char *str)
{
	char *string;
	int x = 0, total = 0;

	if (str == 0)
		return (0);

	while (str[x] != '\0')
		x++;

	string = malloc(sizeof(char) * (x + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	else
	{
		for (total = 0; str[total]; total++)
		{
			string[total] = str[total];
		}
	}
	return (string);
}
