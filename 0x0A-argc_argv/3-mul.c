#include <stdio.h>
#include "main.h"
/**
 * _at - converts a string to an int
 * @x: string to be converted
 * Return: int converted
 */
int _at(char *x)
{
	int q, w, m, l, v, d;

	q = 0;
	w = 0;
	m = 0;
	l = 0;
	v = 0;
	d = 0;

	while (x[l] != '\0')
		l++;

	while (q < l && v == 0)
	{
		if (x[q] == '-')
		{
			++w;
		}
		if (x[q] >= '0' && x[q] <= '9')
		{
			d = x[q] - '0';
			if (w % 2)
			{
				d = -d;
			}
			m = m * 10 + d;
			v = 1;
			if (x[q + 1] < '0' || x[q + 1] > '9')
				break;
			v = 0;
		}
		q++;
	}

	if (v == 0)
		return (0);

	return (m);
}
