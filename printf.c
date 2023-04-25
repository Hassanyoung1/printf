#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - takes the format string as the first argument
 * @format: string as first argument
 * Return: the number of characters except the null
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char c;
	char *s;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case 'c':
					c = va_arg(args, int);
					putchar(c);
					break;
				case 's':
					s = va_arg(args, char *);
					fputs(s, stdout);
					break;
				case '%':
					putchar('%');
					break;
				default:
					putchar('%');
					putchar(format[i]);
					break;
			}
		}
		else
		{
			putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (i);
}
