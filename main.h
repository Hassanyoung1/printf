#ifndef MAIN_H
#define MAIN_H

/*header files*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* sizes */
#define S_LONG 2
#define S_SHORT 1

struct fmt
{
        char fmt;
        int (*fn)(va_list, char[], int, int, int, int);
};


/**prototypes */

typedef struct format;
{
	char *id;
	int (*f)();
} convert_match;

/**function prototype*/

int _printf(const char *format, ...);
int print_unsigned(unsigned int val, int base, int uppercase);
int _putchar(char c);
void print_buffer(char buffer[], int *buff_ind);
void print_numb(unsigned int number, char format);
void print_formatted_string(const char *str);
void print_pointer(void *ptr);
int print_number(int n);
int print_binary(unsigned int n);
int _print_number(int n, char *buffer);
int print_hex(unsigned long int num, int is_capital);
int print_int(int n, int flags);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

#endif
