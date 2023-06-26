#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string - print the string
 * @h: is a letter
 * Return: 0 (success)
 */
int string(char *h)
{
	int count = 0, i;

	puts(h);
	for (i = 0 ; h[i] != '\0' ; i++)
	{
		count += 1;
	}
	return (count);
}
