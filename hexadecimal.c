#include "main.h"

/**
 * print_hexadecimal - Printing in hexadecimal notation
 * @types: Argument lists
 * @buffer: Array for print handling
 * @flags:  Computing active flags
 * @width: finding width
 * @precision: Specifying precision
 * @size: Specifying size
 * Return: Number of chars printed
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}

