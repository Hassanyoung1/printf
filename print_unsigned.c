#include "main.h"

/**
 * print_unsigned - Prining unsigned number
 * @types: Argument list
 * @buffer: Array buffer to handle print
 * @flags: Compuing active flags
 * @width: Finding width
 * @precision: Specifying precision
 * @size: Specifying size
 * Return: Number of chars printed.
 */
int print_unsigned(va_list types, char buffer[], 
    int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
}
