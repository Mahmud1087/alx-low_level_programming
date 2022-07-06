#include "main.h"

/**
 * _isalpha - Display 1 if c is a letter, lowercase or uppercase
 * any other case display 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letter, uppercase and lowercase. 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
