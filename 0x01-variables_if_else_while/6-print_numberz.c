#include <stdio.h>

/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
