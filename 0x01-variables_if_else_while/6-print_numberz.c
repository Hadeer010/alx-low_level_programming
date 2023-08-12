#include <stdio.h>

/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
	char i = '0';

	while (i <= 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
