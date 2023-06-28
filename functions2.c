#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdint.h>
#include "main.h"

/**
 * print_ptr_addr - function prints a pointer address
 *
 * @args: variable lists of arguments
 *
 * Return: count
 */

int print_ptr_addr(va_list args)
{
	void *ptr;
	unsigned long address;
	int count = 0;
	int i, digit;
	char hex_digits[] = "0123456789abcdef";

	ptr = va_arg(args, void *);
	address = (unsigned long)ptr;

	_putchar('0');
	_putchar('x');

	/* Calculate the hexadecimal representation of the memory address */
	for (i = sizeof(void *) * 2 - 1; i >= 0; i--)
	{
		digit = (address >> (i * 4)) & 0xf;
		_putchar(hex_digits[digit]);
		count++;
	}
	return (count);
}
