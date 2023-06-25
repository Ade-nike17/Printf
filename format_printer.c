#include "main.h"

/**
 * format_printer - function checks format type
 *
 * @format: type of argument
 * @args: list of argument
 * @printers: array of the typedef struct datatype
 *
 * Return: number of characters printed
 */

int format_printer(const char *format, va_list args, printer_t printers[])
{
	int i, j;
	int len = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), len++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%'), len++, i++;
		}
		else
		{
			for (j = 0; printers[j].type != NULL; j++)
			{
				if (format[i + 1] == *(printers[j].type))
				{
					len += printers[j].print(args);
					i++;
					break;
				}
			}
			if (printers[j].type == NULL)
			{
				_putchar(format[i]);
				len++;
			}
		}
	}

	return (len);
}
