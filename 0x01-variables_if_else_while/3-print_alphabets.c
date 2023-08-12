#include <stdio.h>
/**
 * main - Entry point function
 *
 * Return: Always 0 (no errors)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');


	return (0);
}
