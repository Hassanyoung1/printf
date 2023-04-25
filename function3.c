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
	int count;

	va_start(args, format);

	count = vfprintf(stdout, format, args);
	va_end(args);
	return (count);
}
