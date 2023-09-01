#include <stdio.h>
/**
 * main - print the number of aurguments
 * @argc: number of arguments
 * @argv: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
