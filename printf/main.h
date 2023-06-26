#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int print_char(char c);
int print_string(const char *str);
int process_specifiers(const char *format_str, int *idx, va_list args_list);
int _printf(const char *format, ...);

#endif /* MAIN_H */
