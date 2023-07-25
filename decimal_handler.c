#include "main.h"

/**
 *decimal_handler - entry point
 *Description: print %d and %i values
 *@arg: pointer to arguments
 *@char_count: counter of digits
 *Return: void
 */

void decimal_handler(va_list arg, int *char_count)
{
	int num;
	char *buffer_ptr;
	char buffer[12];

	num = va_arg(arg, int);
	if (num < 0)
	{
		_putchar('-');
		(*char_count)++;
		num = -num;
	}
	buffer_ptr = buffer;
	while (num != 0)
	{
		*buffer_ptr++ = '0' + (num % 10);
		num /= 10;
	}
	while (buffer_ptr != buffer)
	{
		_putchar(*--buffer_ptr);
		(*char_count)++;
	}
}
