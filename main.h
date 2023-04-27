#ifndef MAIN_H
#define MAIN_H

/*header files*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>




/**prototypes */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int putchar(char c);
int _printf(const char *format, ...);

/**function prototype*/

int _printf(const char *format, ...);
int print_unsigned(unsigned int val, int base, int uppercase);
int _putchar(char c);
void print_numb(unsigned int number, char format);
void print_formatted_string(const char *str);
void print_pointer(void *ptr);
int print_number(int n);
int print_binary(unsigned int n);
int _print_number(int n, char *buffer);
int print_hex(unsigned long int num, int is_capital);
int print_int(int n, int flags)

#endif
