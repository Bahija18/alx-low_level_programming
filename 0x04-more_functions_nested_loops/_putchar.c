#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c
 * @c: The character to print
 *
 * Return: 0 or 1
 * on error, -1 is returned
 */
int _putchar(char c)
{
return (write( 1, &c, 1))
}
