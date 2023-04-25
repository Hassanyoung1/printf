#include "main.h"

/**
 * print_numb - Takes unsigned int as number to be printed
 * @number: The number to be printed
 * @format: Desired output format
 *
 * Return: nothing.
 */
void print_numb(unsigned int number, char format)
{
	switch (format)
	{
		case 'u':
			printf("%u\n", number);
			break;
		case 'o':
			printf("%o\n", number);
			break;
		case 'x':
			printf("%x\n", number);
			break;
		case 'X':
			printf("%X\n", number);
			break;
		default:
			printf("Invalid format specifier.\n");
			break;
	}
}
