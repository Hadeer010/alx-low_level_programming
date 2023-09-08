#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes
 * @s1: string
 * @s2: string to concatenate
 * @n: number of bytes from s2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, le = 0, le2 = 0;

	while (s1 && s1[le])
		le++;
	while (s2 && s2[le2])
		le2++;

	if (n < le2)
		s = malloc(sizeof(char) * (le + n + 1));
	else
		s = malloc(sizeof(char) * (le + le2 + 1));

	if (!s)
		return (NULL);

	while (x < le)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < le2 && x < (le + n))
		s[x++] = s2[y++];

	while (n >= le2 && x < (le + le2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
