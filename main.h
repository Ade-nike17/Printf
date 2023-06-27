#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int print_int(va_list args);
int print_number(int num);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hexadecimal(va_list args);
int print_hexadecimal_upper(va_list args);
int print_String(va_list args);
int print_percent(__attribute__ ((unused)) va_list args);


/**
 * struct printer - struct for printer functions
 *
 * @type: the conversion specifier
 * @print: the function to print the argument
 */

typedef struct printer
{
	char *type;
	int (*print)(va_list);
} printer_t;

int format_printer(const char *format, va_list args, printer_t printers[]);

#endif /* MAIN_H */
