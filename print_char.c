# include "main.h"
# include <stdarg.h>

/**
 * print_char - print string character
 * @ap: points to variable argument
 *
 * Return: (0);
 */

int print_char(va_list ap)
{
	char c;
	char *es = "(null)";

	c = va_arg(ap, int);
	if (c)
		return (_putchar(c));
	c = _string_len(es);
	return (write_string(es, c));
}
