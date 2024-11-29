#include <unistd.h>

/**
 *_putchar - Print output to standard output
 */

int _putchar(char c)

{
  return (write (1, &c, 1));

}
