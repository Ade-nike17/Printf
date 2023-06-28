#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _printf - function produces output according to a format
 *
 * @format: pointer to string type of format in arg
 * Return: number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	int char_len;
	va_list args;

	/* printers array of type printer_t containing format specifiers */
	printer_t printers[] = {
		{"s", print_string},
		{"c", print_char},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hexadecimal},
		{"X", print_hexadecimal_upper},
		{"p", print_ptr_addr},
		{NULL, NULL}};

	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}

	if (format[0] == '%' && format[1] == '\0')
	{
		return (-1);
	}
	char_len = format_printer(format, args, printers);

	va_end(args);

	return (char_len);
}
