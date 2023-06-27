#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * intg - print int
 * @p: is an int
 * @count: is an int
 * Return: 0 (success)
 */
int intg(int p, int count)
{
	int i, digit, l;
	int y[1000];

	for (i = 0 ; p != 0 ; i++)
	{
		digit = p % 10;
		p = p / 10;
		count += 1;
		y[i] = digit;
	}
	y[i] = '\0';
	for (l = i - 1 ; l >= 0 ; l--)
		_putchar(y[l] + '0');
	return (count);
}
