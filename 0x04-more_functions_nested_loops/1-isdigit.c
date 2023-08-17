#include "main.h"

/**
 *_isdigit - check for digit from 0 to 9
 * @c : parameters function
 * main : entry point
 * Return: return 1 if the code succeed but 0 if fails
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);


}
