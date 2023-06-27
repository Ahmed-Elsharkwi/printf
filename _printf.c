#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"
#define atoa(x) #x
/**
 * _printf - print the number of characters
 * @format: is the character string
 * Return: 0 (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
	int count = 0, y;
	char c;
	char *h;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0 ; i < strlen(format) ; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
				case '%':
					count = percent(count);
					break;
				case 'c':
					c = va_arg(args, int);
					count = chare(c, count);
					break;
				case 's':
					h = va_arg(args, char*);
					count = string(h, count);
					break;
				case 'd':
					y = va_arg(args, int);
					count = intg(y, count);
					break;
				default:
					break;
			}
		}
		else
			count = elsee(count, format[i]);
	}
	va_end(args);
	return (count);
}
