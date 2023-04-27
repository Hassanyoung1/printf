#include "main.h"

/**
 * _printf - Prints a formatted string to the console.
 * @format: The format string to print.
 *
 * Return: The number of characters printed, or -1 if an error occurred.
 */

int _printf(const char *format, ...)
{
	if (!format)
		return (-1);

	va_list args;

	va_start(args, format);

	char buffer[BUFF_SIZE];
	int buff_ind = 0, printed_chars = 0;

	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			int flags = get_flags(format, &format);
			int width = get_width(format, &format, args);
			int precision = get_precision(format, &format, args);
			int size = get_size(format, &format);
			int printed = handle_print(format, &format, args,
				buffer, flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
		else
		{
			buffer[buff_ind++] = *format;
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars++;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(args);

	return (printed_chars);
}
/**
 * print_buffer - prints the contents of the buffer
 * @buffer: the buffer to be printed
 * @buff_ind: pointer to the index at which to add the next character
 *
 * This function prints the contents of the buffer if it's not empty.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(STDOUT_FILENO, buffer, *buff_ind);
	*buff_ind = 0;
}
