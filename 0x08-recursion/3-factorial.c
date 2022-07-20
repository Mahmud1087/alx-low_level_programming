#include "main.h"
/**
 * factorial - This function calculates the factorial of a given number.
 * @n: given number
 * Return: factorial
 **/
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
