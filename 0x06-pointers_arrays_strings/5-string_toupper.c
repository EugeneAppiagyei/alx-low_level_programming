#include "main.h"

/**
 * string_toupper - converting string to uppercase
 * @a: parameter
 * Return: string
 */
char *string_toupper(char *a)
{
	int z = 0;

	while (a[z])
	{
		if (a[z] >= 97 && a[z] <= 122)
			a[z] = a[z] - 32;
		z++;
	}
	return (a);
}
