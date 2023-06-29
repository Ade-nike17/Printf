#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * print_ptr_addr - prints a pointer address
 *
 * @args: va_list containing the argument to print
 * Return: number of characters printed
 */
int print_ptr_addr(va_list args)
{
	void *ptr;
	unsigned long int address;
	int count = 0;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
		return (_printf("(nil)"));

	address = (unsigned long int)ptr;

	count += _putchar('0');
	count += _putchar('x');
	count += print_hexadecimal_address(address);

	return (count);
}


/**
 * print_hexadecimal_address - prints a hexadecimal address
 *
 * @address: the address to print
 * Return: number of characters printed
 */

int print_hexadecimal_address(unsigned long int address)
{
	char hex_digits[] = "0123456789abcdef";
	int count = 0;

	if (address >= 16)
	count += print_hexadecimal_address(address / 16);

	count += _putchar(hex_digits[address % 16]);

	return (count);
}
