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
	long unsigned i;
	int count = 0;
	int j;
	char *h;
	char c;

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
					 c = va_arg(args, int);
					_putchar(c);
					count += 1;
					break;
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					count += 1;
					break;
				case 's':
					h = va_arg(args, char*);
					puts(h);
					for (j = 0 ; h[j] != '\0' ; j++)
						count += 1;
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
