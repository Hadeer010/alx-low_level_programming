#include "main.h"
/**
 * rev_string - Write a function that reverses a string.
 *@s: input
 *Return: dtring reversed
 */
void rev_string(char *s)
{
	int x, y;

	x = 0;

	char st = s[0];

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		x--;
		st = s[y];
		s[y] = s[x];
		s[x] = st;
	}
}
