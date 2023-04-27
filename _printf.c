#include "main.h"

/**
 * print_buffer - Prints the contents of the buffer if it's not empty.
 * @buffer: The buffer to print.
 * @buff_ind: The index of the buffer.
 *
 * Return: void.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	/* If buffer is not empty, print its contents */
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	/* Reset buffer index */
	*buff_ind = 0;
}

/**
 * _printf - Prints a formatted string to the console.
 * @format: The format string to print.
 *
 * Return: The number of characters printed, or -1 if an error occurred.
 */
int _printf(const char *format, ...)
{
	/* Initialize variables */
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	/* Return -1 if format string is NULL */
	if (format == NULL)
		return (-1);

	/* Start variable arguments list */
	va_start(list, format);

	/* Loop through format string */
	for (i = 0; format && format[i] != '\0'; i++)
	{
		/* If character is not %, add it to buffer */
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			/* If buffer is full, print it */
			if (buff_ind == BUFF_SIZE)
			{
				print_buffer(buffer, &buff_ind);
			}
			/* Increment number of printed characters */
			printed_chars++;
		}
		/* If character is %, format the next argument */
		else
		{
			/* Print buffer before formatting */
			print_buffer(buffer, &buff_ind);
			/* Get formatting options */
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			i++;
			/* Print formatted argument */
			printed = handle_print(format, &i, list, buffer,
					       flags, width, precision, size);
			/* Return -1 if an error occurred */
			if (printed == -1)
			{
				return (-1);
			}
			/* Increment number of printed characters */
			printed_chars += printed;
		}
	}

	/* Print any remaining characters in buffer */
	print_buffer(buffer, &buff_ind);

	/* End variable arguments list */
	va_end(list);

	/* Return number of printed characters */
	return (printed_chars);
}
