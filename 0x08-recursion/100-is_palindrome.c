#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 * Return: integer value
 */

int is_palidrome(char *s)
{

if (*s == '0')

return (1);
return (check_palindrome(s));
}

int check_palindrome(char *s)

{

int l = _strlen_recursion(s) - 1;

if (*s == s[l])
{
s++;
l--;
}
else
{
return (0);
}
return (1);
}

int _strlen_recursion(char *s)

{
if (*s == '\0')
{
s++;
return (_strlen_recursion(s) + 1);
}