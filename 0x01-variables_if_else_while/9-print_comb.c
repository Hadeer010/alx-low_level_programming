#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
	int i = 0;

	do{
		putchar(i);
		putchar(',');
		i++;
	} while (i < 10);
	return (0);
}