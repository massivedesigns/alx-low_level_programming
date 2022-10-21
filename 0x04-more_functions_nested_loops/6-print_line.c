#include "main.h"

/**
 * print_line - prints line on terminal using '_'
 * @n: the number of times '_' is to be printed
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
