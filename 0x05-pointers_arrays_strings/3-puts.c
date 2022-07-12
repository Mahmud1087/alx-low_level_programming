#include "main.h"
/**
 *_puts - This prints a string, to standard output
 *@str: value to be evaluated.
 *Return: 0.
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
