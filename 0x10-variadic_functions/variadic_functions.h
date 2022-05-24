#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct f_struct - struct for arg format and type
 * @f_mat: The format specifier
 * @f: The funct. for the type associated
 */
typedef struct f_struct
{
char f_mat;
void (*f)(va_list);
} f_t;
void print_all(const char * const format, ...);
#endif /* VARIADIC_FUNCTIONS_H */
