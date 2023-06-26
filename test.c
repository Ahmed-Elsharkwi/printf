#include <stdio.h>
#include "main.h"
#include <unistd.h>
int main(int argc, char *argv[])
{
	char *c = argv[argc - 1];
	_putchar(*c);
	return (0);
}
