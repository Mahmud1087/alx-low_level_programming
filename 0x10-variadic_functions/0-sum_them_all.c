#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: count of unknown parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list parameters;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(parameters, n);

	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);
	va_end(parameters);

	return (sum);
}
