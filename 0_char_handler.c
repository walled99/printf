#include "main.h"

/**
 * char_handler - function Entry point
 * Description: printing char
 * @arg: pointer to arguments
 * @counter: Integer
 *
 * Return: void
*/

void char_handler(va_list arg, int *counter)
{
	char ch = (char)va_arg(arg, int);

	_putchar(ch);
	(*counter)++;

}
