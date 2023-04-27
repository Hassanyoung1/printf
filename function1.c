#include "main.h"


/**
 * _printd - prints a number
 * @n: the number to print
 *
 * Return: the number of digits printed
 */
int _printd(int n)
{
	int printed_chars = 0;

	if (n / 10)
	{
		printed_chars += _printd(n / 10);
	}
	putchar(n % 10 + '0');
	printed_chars++;
	return (printed_chars);
}

