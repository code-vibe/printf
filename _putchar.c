# include <unistd.h>
# include "main.h"

/**
 * _putchar - prints a char
 * @c: character to print to stdout
 *
 * Description: This function uses write which takes fd (file description),
 *				in order to write to standard output the `stdout` macro is
 *				passed as fd, the function takes a buffer which holds the
 *				string to be printed, in place of buffer a char address is
 *				passed, in other to limit the function to one character the
 *				count is initialized to 1, thus the entire putchar function
 *				prints  one character at a time
 *
 * Return: the number of string printed and also indicates success or failure
 *			with 0 being failure and 1 being success
 */

int _putchar(const char c)
{
	return (write(std_out, &c, 1));
}
