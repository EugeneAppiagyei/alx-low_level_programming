#include "main.h"

/**
* print_alphabet_x10(void) - prints lowercase alphabets
*/

void print_alphabet_x10(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

}
