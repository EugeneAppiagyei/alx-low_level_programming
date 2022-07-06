#include "main.h"

/**
 * _abs - function that prints absolute value of a number
 * @n: takes an integer
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n > 0)
		n = -n;
	return (n);
}
