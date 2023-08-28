#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: rows
 * Return: void is nothing to output
 */
void print_chessboard(char (*a)[8])
{
	int un, x;

	for (un = 0; un < 8; un++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[un][x]);
		}
		_putchar('\n');
	}
}
