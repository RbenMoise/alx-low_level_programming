#include "main.h"
/**
 * _islower - entry point
 *@ c: is the char to be ckecked 
 * Return: 1 if c is lower otherwide 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

