#include "main.h"
#include <string.h>
/**
 * _strncpy - for copying
 * @dest: parameter 1
 * @src: parameter 2
 * @n: paramater 3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
		strncpy(dest, src, n);
			return (dest);
}
