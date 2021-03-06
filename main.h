#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

struct convert
{
  char *sym;
  int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int _print_char(char c);
int char_format(va_list list);
int string_format(va_list list);
int percent_format(__attribute__((unused))va_list list);
int reader(const char *format, conver_t f_list[], va_list arg_list);
int _unsigned_number(unsigned int n);
int _number(va_list args);
int unsigned_int_format(va_list list);
int integer_format(va_list list);
#endif
