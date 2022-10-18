# include "main.h"
# include <stdarg.h>

/**
 * get_fmt_fun - returns format function or null
 * @fmt: fmt string
 *
 * Return: pointer function or null
 */

int (*get_fmt_fun(const char * const fmt))(va_list)
{
	unsigned int i;
	printf_fmt_t fmt_fun[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", printf_dec},
		{"i", printf_int},
		{"b", print_bin}
	};
	unsigned int sz = sizeof(fmt_fun) / sizeof(printf_fmt_t);

	i = 0;
	while (i < sz)
		if (*(fmt_fun + i++)->fmt_s == *fmt)
			return ((*(fmt_fun + i - 1)).fun_f);
	return (NULL);
}
