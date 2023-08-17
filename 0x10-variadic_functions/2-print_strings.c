#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
  * print_strings - prints strings in arguments
  * @separator: separator
  * @n: number ofstrings to print
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
