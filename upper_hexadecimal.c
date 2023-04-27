#include "main.h"

/**
 * print_hexa_upper - Printing an unsigned number in upper hexadecimal notation
 * @types: Argument lists
 * @buffer: Array buffer for printing handling
 * @flags: Computing active flags
 * @width: Finding width
 * @precision: Specifying precision
 * @size: Specifying size
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
