#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * print_number - prints a number
 * @args:arguments
 * Return: arguments printed
 */
int _number(va_list args)
{
  int n;
  int div;
  int len;
  unsigned int num;

  n  = va_arg(args, int);
  div = 1;
  len = 0;

  if (n < 0)
    {
      len += _print_char('-');
      num = n * -1;
    }
  else
    num = n;

  for (; num / div > 9; )
    div *= 10;

  for (; div != 0; )
    {
      len += _print_char('0' + num / div);
      num %= div;
      div /= 10;
    }

  return (len);
}
/**
 *_unsigned_number - Prints an unsigned number
 * @n: unsigned integer
 * Return:numbers printed
 */
int _unsigned_number(unsigned int n)
{
  int div;
  int len;
  unsigned int num;

  div = 1;
  len = 0;

  num = n;

  for (; num / div > 9; )
    div *= 10;

  for (; div != 0; )
    {
      len += _print_char('0' + num / div);
      num %= div;
      div /= 10;
    }

  return (len);
}
