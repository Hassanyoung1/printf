#ifndef MAIN_H
#define MAIN_H

/**header files*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

/**function prototype*/

/**nt putchar(char c);*/
int _printf(const char *format, ...);
int print_number(int n);
int print_binary(unsigned int n);
int _print_number(int n, char *buffer);
#endif
