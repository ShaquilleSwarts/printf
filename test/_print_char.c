#include <unistd.h>

/**
 * _print_char - writes the character c to stdout
 * @c: Param to be printed
 * Return: On success return 1.
 */

int _print_char(char c)
{
  return (write(1, &c, 1));
}
