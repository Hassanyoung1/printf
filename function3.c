#include "main.h"

/**
 * _printf - Prints output according to a format
 * @format: The format string
 * @...: Optional arguments for format string
 *
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'u':
				count += print_unsigned(va_arg(args, unsigned int), 10, 0);
				break;
			case 'o':
				count += print_unsigned(va_arg(args, unsigned int), 8, 0);
				break;
			case 'x':
				count += print_unsigned(va_arg(args, unsigned int), 16, 0);
				break;
			case 'X':
				count += print_unsigned(va_arg(args, unsigned int), 16, 1);
				break;
			case '\0':
				return (-1);
			default:
				_putchar('%');
				count++;
				if (*format != '%')
				{
					_putchar(*format);
					count++;
				}
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
