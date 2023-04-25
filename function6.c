#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - takes the format string as the first argument
 * @format: string as first argument
 * Return: the number of characters except the null
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;
	void *p;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr != '%')
		{
			putchar(*ptr);
			count++;
		}
		else
		{
			switch (*(++ptr))
			{
				case 'p':
					p = va_arg(args, void *);
					printf("%p", p);
					count += sizeof(void *);
					break;
				default:
					putchar('%');
					putchar(*ptr);
					count += 2;
					break;
			}
		}
	}
	va_end(args);
	return (count);
}
