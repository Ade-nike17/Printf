#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int len, len2, len3;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	_printf("Binary:[%b]\n", 98);

	len3 = _printf("%");
	printf("The return value is : %d\n", len3);

	len = _printf("%d", -1024);
	len2 = printf("%d", -1024);

	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ: return value of len is: %d and return value of len2 is: %d\n", len, len2);
		fflush(stdout);
		return (1);
	}
	printf("Yes! The return value of len is: %d and the return value of len2 is: %d", len, len2);

	return (0);
}
