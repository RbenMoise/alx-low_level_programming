#include "main.h"
#include <unistd.h>
/**
 * _putchar - write
 * @c: -  print
 * Return 0 On success 1
 * On error -1
 */

int _putchar(char c)
{
	return(write(1,&c, 1));
}
