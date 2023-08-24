#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @f: string
 * Return: string encoded
 */
char *leet(char *f)
{
	char *cl = f;
	char k[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*f)
	{
		for (x = 0; x < sizeof(k) / sizeof(char); x++)
		{
			if (*f == k[x] || *f == k[x] + 32)
			{
				*f = 48 + v[x];
			}
		}
		f++;
	}
	return (cl);
}
