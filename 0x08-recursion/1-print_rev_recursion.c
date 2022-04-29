#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: input
 * Return: Always 0 (success)
 */

void _print_rev_recursion(char *s)

{

if (*s == '\0')

{
return;
}
s++;
_print_rev_recursion(s);
s--;
return (*s);
}
