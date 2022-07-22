#include <stdio.h>

/**
 * main - prints it's name followed with a new line.
 * @argc: argument count
 * @argv: argument string
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
