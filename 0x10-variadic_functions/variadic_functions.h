#ifndef VARIAFUNC
#define VARIAFUNC

#include <stdarg.h>
#include <stdio.h>
/**
 * struct args_t - contain the type and the function.
 * @format: the format to print
 * @function: the function that prints
 * Description: contains type and format to print.
 */
typedef struct args_t
{
	char *format;
	void (*function)();
} args_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

