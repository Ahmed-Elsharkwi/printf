#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string - print the string
 * @h: is a letter
 * @count: is an int
 * Return: 0 (success)
 */
int string(char *h, int count)
{
	int i;

	for (i = 0 ; h[i] != '\0' ; i++)
	{
		_putchar(h[i]);
		count += 1;
	}
	return (count);
}
