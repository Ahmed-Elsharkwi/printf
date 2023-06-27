#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
/**
 * _printf - print the number of characters
 * @format: is the character string
 * Return: 0 (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	int count = 0;
	char c;
	int *y;
	char *h;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0 ; i < strlen(format) ; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case '%':
					_putchar('%');
					count += 1;
					break;
				case 'c':
					c = va_arg(args, int);
					count = chare(c);
					break;
				case 's':
					h = va_arg(args, char*);
					count = string(h);
					break;
				default:
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count += 1;
		}
	}
	va_end(args);
	return (count);
}
