# ifndef _PRINTF_H_
# define _PRINTF_H_
# ifndef NULL
# define NULL ((void *)0)
# endif
# ifndef BASE10
# define BASE10 10
# endif
# ifndef BASE2
# define BASE2 2
# endif
# ifndef std_out
# define std_out 1
# endif
# include <stdarg.h>
/**
 * struct printf_fmt - holds format string and function
 * @fmt_s: character string holding the format
 * @fun_f: holds format functions
 *
 * Description: datastructure for printf
 */

typedef struct printf_fmt
{
	char *fmt_s;
	int (*fun_f)(va_list);
} printf_fmt_t;

int _putchar(const char);
int _printf(const char *, ...);
int print_char(va_list);
int print_string(va_list);
int (*get_fmt_fun(const char * const fmt))(va_list);
int write_string(const char * const, const unsigned int);
int _string_len(const char * const s);
int printf_int(va_list);
int printf_dec(va_list);
int get_digits(unsigned int, unsigned int);
int print_bin(va_list);

# endif
