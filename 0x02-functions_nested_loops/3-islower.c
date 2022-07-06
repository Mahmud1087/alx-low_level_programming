#include "main.h"

/**
 * _islower - Display 1 if the output is a lowercase
 * any other case display 0
 *
 * Return: 1 for lowercase. 0 for others
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
