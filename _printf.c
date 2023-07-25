#include "main.h"
#include <stdarg.h>

/**
 * _printf - work as printf with (%,%s,%c)
 * @format: pointer
 * Return: number of char
 * or -1 when somthing wrong
*/

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list arg;

	va_start(arg, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == ' ' || *format == '\0' || !*format)
				return (-1);
			switch (*format)
			{
			case 'c':
				char_handler(arg, &counter);
				break;
			case 's':
				string_handler(arg, &counter);
				break;
			case '%':
				_putchar('%');
				counter++;
				break;
			case 'd':
			case 'i':
				decimal_handler(arg, &counter);
				break;
			}
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(arg);
	return (counter);
}
