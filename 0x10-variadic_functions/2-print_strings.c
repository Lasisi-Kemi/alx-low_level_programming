#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the str separator
 * @n: the num. of args
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *str;

va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
