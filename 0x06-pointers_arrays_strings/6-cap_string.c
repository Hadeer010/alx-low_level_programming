#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str: input
 * Return: string
 */
char *cap_string(char *str)
{
	int limit = 0;

	while (str[limit])
	{
		while (!(str[limit] >= 'a' && str[limit] <= 'z'))
		{
			limit++;
		}
		if (str[limit - 1] == '' ||
		str[limit - 1] == '\t' ||
		str[limit - 1] == ';' ||
		str[limit - 1] == '\n' ||
		str[limit - 1] == ',' ||
		str[limit - 1] == '.' ||
		str[limit - 1] == '!' ||
		str[limit - 1] == '?' ||
		str[limit - 1] == '"' ||
		str[limit - 1] == '(' ||
		str[limit - 1] == ')' ||
		str[limit - 1] == '{' ||
		str[limit - 1] == '}' ||
		limit == 0)
		{
			str[limit] -= 32;
		}
		limit++;
}
	return (str);
}
