#include "main.h"
/**
 * _putchar - writes the charavters c
 * @c: The character to print
 * Return: always 1 when success
 * -1 for errors,
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
