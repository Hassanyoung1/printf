#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
=======

/*header files*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
>>>>>>> c8f4be003c8e0895a3c9dc4461712ceb71bc3603
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

<<<<<<< HEAD
/* FLAGS */
=======
/* flags */
>>>>>>> c8f4be003c8e0895a3c9dc4461712ceb71bc3603
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

<<<<<<< HEAD
/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
=======
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
>>>>>>> c8f4be003c8e0895a3c9dc4461712ceb71bc3603
