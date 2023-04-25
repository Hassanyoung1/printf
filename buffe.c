#include "main.h"

/**
 * _print_number - prints a number
 * @n: the number to print
 * @buffer: the buffer to write to
 *
 * Return: the number of digits printed
 */
int _print_number(int n, char *buffer)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		buffer[0] = '-';
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		count += _print_number(num / 10, buffer);
	}
	buffer[count] = (num % 10) + '0';
	count++;
	return (count);
}
