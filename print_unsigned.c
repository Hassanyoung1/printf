#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned - Prints an unsigned integer
 * @val: The value to print
 * @base: The base to use for conversion (8, 10, or 16)
 * @uppercase: Whether to use uppercase letters for hex digits
 *
 * Return: The number of digits printed
 */
int print_unsigned(unsigned int val, int base, int uppercase)
{
	const char *digits;
	char buffer[20];
	int count = 0;
	int i;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	do

	{
		buffer[count++] = digits[val % base];
		val /= base;
	} while (val != 0);

	for (i = count - 1; i >= 0; i--)
		putchar(buffer[i]);
	return (count);
}
