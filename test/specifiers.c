#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * char_format - prints char
 * @list: arguments list
 * return: characters printed
 */

int char_format(va_list list)
{
  _print_char(va_arg(list, int));
  return (1);
}

/**
 * string_format - prints string
 * @list: arguments list
 * return charcaters printed
 */

int string_format(va_list list)
{
  int x;
  char *str;

  str = va_arg(list, char * );
  if (str == NULL)
    {
      str = "";
    }
  for (x = 0; str[x] != '\0'; ++x)
    {
      _print_char(str[x]);
    }
  return (x);
}


/**
 * percent_format - prints percent
 * @list: arguments list
 * return charcaters printed
 */

int percent_format(__attribute__((unused))va_list list)
{
  _print_char('%');
  return(1);
}
