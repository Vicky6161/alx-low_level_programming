#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * @c: The charcter toprint
 * Return1 if true,0 if false
 * on error, -1 return.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
