#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i != 4 && i != 9)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');

}
