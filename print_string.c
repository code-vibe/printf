# include <stdarg.h>
# include "main.h"


/**
 * print_string - print string from argument pointer
 * @ap: holds variable argument pointer value
 *
 * Return: number of character written
 */

int print_string(va_list ap)
{
	char *s;
	unsigned int c;
	char *es = "(null)";

	s = va_arg(ap, char *);
	if (s)
	{
		c = _string_len(s);
		return (write_string(s, c));
	}
	c = _string_len(es);
	return (write_string(es, c));
}
