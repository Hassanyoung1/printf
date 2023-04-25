#include "main.h"

/**
 * _printf - takes the format string as the first argument
 * @format: string as first argument
 * Return: the number of characters except the null
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'S')
		{
			char *s = va_arg(args, char *);

			while (*s)
			{
				if (*s >= 32 && *s < 127)
				{
					putchar(*s);
				}
				else
				{
					printf("\\x%02X", (unsigned char) *s);
					count += 3;
				}
				s++;
				count++;
			}
			format += 2;
		}
		else
		{
			putchar(*format++);
			count++;
		}
	}
	va_end(args);
	return (count);
}
