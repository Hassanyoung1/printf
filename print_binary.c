#include "main.h"
/**
 * print_binary - prints an unsigned int in binary format
 * @n: the number to print
 *
 * Return: the number of digits printed
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n / 2)
	{
		count += print_binary(n / 2);
	}
	putchar((n % 2) + '0');
	count++;
	return (count);
}
