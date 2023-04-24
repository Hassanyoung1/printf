#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - takes a string parameter format
 * @format: represent format the format string
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = vfprintf(stdout, format, args);

	va_end(args);

	return (count);
}
