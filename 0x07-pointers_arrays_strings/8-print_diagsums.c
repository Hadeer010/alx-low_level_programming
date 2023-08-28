#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: second array of int types
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int un, x1 = 0, x2 = 0;

	for (un = 0; un < size; un++)
	{
		x1 += a[un];
		x2 += a[size - un - 1];
		a += size;
	}
	printf("%d, ", x1);
	printf("%d\n", x2);
}
