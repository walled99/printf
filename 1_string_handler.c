#include "main.h"

/**
 * string_handler - Entry point
 * Description: dealing with %s argument
 * @arg: pointer to arguments
 * @counter: integer
 * Return: nothing
*/

void string_handler(va_list arg, int *counter)
{
	const char *str = va_arg(arg, const char *);
	char *nul = "(null)";

	if (str == NULL)
	{
		while (*nul)
			_putchar((*nul)++);
		*counter = 6;
	}

	else
	{
		while (*str)
		{
			_putchar(*str);
			str++;
			(*counter)++;
		}
	}

}
