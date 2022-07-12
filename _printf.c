#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - receives specifiers 
 * @format: Given string
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
  int printed_chars;
  conver_t f_list[] = {
		      {"c", char_format},
		      {"s", string_format},
		      {"%", percent_format},
		      {"d", integer_format},
		      {"i", integer_format},
		      {NULL, NULL}
  };
  va_list arg_list;

  if (format == NULL)
    return (-1);

  va_start(arg_list, format);
  printed_chars = reader(format, f_list, arg_list);
  va_end(arg_list);
  return (printed_chars);
}
