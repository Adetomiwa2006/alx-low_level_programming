#include "main.h"
/**
 * _isupper - checks if the characteris uppercase
 * @c: is the int that will use for the argument of the function
 * Return: 1 if it is an uppercase character, while 0 if it is not
 */
int _isupper(int c)
{
	if (c>='A' && c<= 'Z')
		return (1);
	else
		return (0);
}
