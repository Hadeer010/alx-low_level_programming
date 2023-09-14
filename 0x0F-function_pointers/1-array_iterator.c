#include "function_pointers.h"

/**
 * array_iterator - maps an array through a func pointer
 * Description: 'the program's description'
 * @array: the int arry
 * @size: the array size
 * @action: function pointer
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
	{
		while (array <= end)
		{
			action(*array++);
		}
	}
}
