#include "main.h"

/**
 * print_formatted_string - Prints a string with non-printable characters
 * @str: The string to print
 * Return: nothing
 */
void print_formatted_string(const char *str)
{
	int len = strlen(str);
	int i;

	/*Loop over each character in the string*/
	for (i = 0; i < len; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			printf("\\x%02X", str[i]);
		}
		else
		{
			/**If it's a printable character, simply print it*/
			printf("%c", str[i]);
		}
	}
}

