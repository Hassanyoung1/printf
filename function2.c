#include "main.h"
/**
 * _printb - prints an unsigned int in binary
 * @n: the unsigned int to print
 */
void _printb(unsigned int n)
{
	if (n / 2)
	{
		_printb(n / 2);
	}
	putchar(n % 2 + '0');
}
