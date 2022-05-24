#include "variadic_functions.h"

/**
 * print_char - prints the char format
 *
 * @args: the arglist to print
 *
 * Return: nothing
 */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int - prints the int format
 *
 * @args: the arglist to print
 *
 * Return: nothing
 */
void print_int(va_list args)
{
printf("%i", va_arg(args, int));
}

/**
 * print_float - prints the int format
 *
 * @args: the arglist to print
 *
 * Return: nothing
 */
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string - prints the int format
 *
 * @args: the arglist to print
 *
 * Return: nothing
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
 * print_all - prints any arg
 *
 * @format: the arglist
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
int i, j;
va_list args;
f_t f_typ[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

char *sep1 = "", *sep2 = ", ";
i = 0;
va_start(args, format);
while (format && format[i] != '\0')
{
j = 0;
while (j < 4)
{
if (f_typ[j].f_mat == format[i])
{
printf("%s", sep1);
f_typ[j].f(args);
sep1 = sep2;
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
