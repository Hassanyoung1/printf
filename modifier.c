#include "main.h"
#include <stdio.h>

/**
 * print_int - Print an integer with optional flags
 * @n: The integer to print
 * @flags: The flags to use for printing (0 for none)
 *
 * Return: The number of characters printed
 */
int print_int(int n, int flags)
{
    int count = 0;

    // Check if the number is negative
    int is_negative = n < 0;
    if (is_negative)
    {
        count += _putchar('-');
        n = -n;
    }

    // Convert the number to a string
    char buffer[32];
    int i = 0;
    do {
        buffer[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);
    buffer[i] = '\0';

    // Reverse the string
    for (int j = 0, k = i - 1; j < k; j++, k--)
    {
        char temp = buffer[j];
        buffer[j] = buffer[k];
        buffer[k] = temp;
    }

    // Apply the flags
    if (flags & FLAG_PLUS && !is_negative)
        count += _putchar('+');
    else if (flags & FLAG_SPACE && !is_negative)
        count += _putchar(' ');

    // Print the number
    count += _puts(buffer);

    return count;
}

/**
 * _printf - Print a formatted string
 * @format: The format string to print
 * @...: The arguments to substitute into the format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int count = 0;
    int flags = 0;

    for (const char *p = format; *p != '\0'; p++)
    {
        if (*p == '%')
        {
            // Parse the flags
            flags = 0;
            for (;; p++)
            {
                if (*p == '+')
                    flags |= FLAG_PLUS;
                else if (*p == ' ')
                    flags |= FLAG_SPACE;
                else if (*p == '#')
                    flags |= FLAG_HASH;
                else
                    break;
            }

            // Parse the conversion specifier
            switch (*p)
            {
                case 'd':
                case 'i':
                    count += print_int(va_arg(args, int), flags);
                    break;

                // ...

                default:
                    // Unknown conversion specifier
                    count += _putchar(*p);
                    break;
            }
        }
        else
        {
            // Normal character
            count += _putchar(*p);
        }
    }

    va_end(args);
    return count;
}
