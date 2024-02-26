#include "main.h"

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 11 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 10 ){	
			_putchar('0' + j);
			}
			
		_putchar((j % 10) + '0');
		}	
	_putchar('\n');
	}
}
