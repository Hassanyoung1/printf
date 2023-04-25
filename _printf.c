#include <stdarg.h>
#include <stdio.h>
#include <main.h>

/**
 * _printf - takes a string parameter format
 * @format: represent format the format string
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = vfprintf(stdout, format, args);
	va_end(args);
	return (count);
}

