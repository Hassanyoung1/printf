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

#endif
