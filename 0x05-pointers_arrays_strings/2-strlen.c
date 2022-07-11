#include "main.h"
#include <string.h>

/**
 * _strlen - length of a string
 * @s: string pointer
 * Return: returns length
 */

int _strlen(char *s)
{
	int u;

	u = 0;

	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
