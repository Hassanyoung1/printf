#include "main.h"
/**
 * _printf - Produces output according to a format.
 * @format: A character string containing zero or more directives.
 *
 * Return: The number of characters printed (excluding the null byte used to
 *         end output to strings), or -1 if an error occurred.
 */
int _printf(const char *format, ...)
{
	va_list args;
	char buffer[BUFFER_SIZE];
	char *p = buffer;
	const char *f = format;
	int count = 0, written = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	
	while (*f != '\0')
	{
		if (*f == '%')
		{
			f++;
			switch (*f)
			{
				case 'c':
					count++;
					*p++ = va_arg(args, int);
					break;
				case 's':
					count += va_arg(args, int);
					written = write(1, va_arg(args, char *), count);
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				case '%':
					count++;
					*p++ = '%';
					break;
				case 'd':
				case 'i':
					count++;
					written = sprintf(p, "%d", va_arg(args, int));
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				case 'b':
					count++;
					written = sprintf(p, "%u", va_arg(args, unsigned int));
					if (written < 0)
					{
						return (-1);
					}
					for (int i = 0; i < written; i++)
					{
						if (*(p + i) == '0')
						{
							*(p + i) = 'B';
						}
						else
						{
							*(p + i) = 'b';
						}
					}
					p += written;
					break;
				case 'u':
					count++;
					written = sprintf(p, "%u", va_arg(args, unsigned int));
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				case 'o':
					count++;
					written = sprintf(p, "%o", va_arg(args, unsigned int));
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				case 'x':
					count++;
					written = sprintf(p, "%x", va_arg(args, unsigned int));
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				case 'X':
					count++;
					written = sprintf(p, "%X", va_arg(args, unsigned int));
					if (written < 0)
					{
						return (-1);
					}
					p += written;
					break;
				default:
					count++;
					*p++ = '%';
					*p++ = *f;
					break;
			}
		}
		else
		{
			count++;
			*p++ = *f;
		}
		if
			(p >= buffer + BUFFER_SIZE)
			{
				written = write(1, buffer, p - buffer);
				if (written < 0)
				{
					return (-1);
				}
				p = buffer;
			}
		f++;
	}
	va_end(args)if (p > buffer) {
                written = write(1, buffer, p - buffer);
		if (p > buffer)
		{
			return (-1);
		}
		return (count);
}
