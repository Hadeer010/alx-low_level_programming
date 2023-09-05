#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to grid making
 * @width: width
 * @height: height
 * Return: pointer to 2 dimintion array
 */
int **alloc_grid(int width, int height)
{
	int **me;
	int z, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	me = malloc(sizeof(int *) * height);

	if (me == NULL)
		return (NULL);

	for (z = 0; z < height; z++)
	{
		me[z] = malloc(sizeof(int) * width);

		if (me[z] == NULL)
		{
			for (; z >= 0; z--)
				free(me[z]);

			free(me);
			return (NULL);
		}
	}

	for (z = 0; z < height; z++)
	{
		for (m = 0; m < width; m++)
			me[z][m] = 0;
	}

	return (me);
}
