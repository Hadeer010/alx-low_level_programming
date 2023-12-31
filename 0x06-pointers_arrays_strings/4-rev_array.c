#include "main.h"
/**
 * reverse_array - rerses the content of an array of integers.
 * @n: number of array elements
 * @a: an array for integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0, y = (n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
