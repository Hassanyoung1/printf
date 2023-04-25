#include "main.h"

/**
 * print_number - prints a number
 * @n: the number to print
 *
 * Return: the number of digits printed
 */
int print_number(int n)
{
	unsigned int num;
	int count = 0;

	if (n < 0)
	{
		putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		count += print_number(num / 10);
	}
	putchar((num % 10) + '0');
	count++;
	return (count);
}
