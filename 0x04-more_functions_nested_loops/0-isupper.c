#include "main.h"

/**
 * _isupper- check for uppercase character
 * main - entry point for my programme
 * @c: function parameters
 * Return: return (1) on success and (0) on failure.
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);


}
