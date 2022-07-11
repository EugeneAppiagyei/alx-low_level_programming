#include "main.h"
#include <string.h>

/**
 *puts2 - a function
 *@str: a parameter
 */
void puts2(char *str)
{
	int x, i;

	x = strlen(str);
	for (i = 0; i < x; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
