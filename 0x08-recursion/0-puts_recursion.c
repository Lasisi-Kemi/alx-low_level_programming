#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - printthe given string w/ _putchar recursively
 * @s: The given string
 * Return: 0 if successful exit
 */

void _puts_recursion(char *s)
{

if (*s != '\0')

{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
