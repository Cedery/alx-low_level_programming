#include "main.h"

/**
 * main - main entry
 * print_most_numbers -print 0 to 9 excludibg 2 and 4
 * Return: return void
 */

void print_most_numbers(void)

{

	int i;

	for (i = 0 ; i < 10 ; ++i)

	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
