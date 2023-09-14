#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: the int arry
 * @size: the array size
 * @cmp: function of compare
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
	{
		while (x < size)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
			x++;
		}
	}
	return (-1);
}
