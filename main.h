#ifndef MAIN_H
#define MAIN_H

#define MAX_VALUE 100

/**header files*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
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
#endif
