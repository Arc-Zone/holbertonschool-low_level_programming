#include "main.h"
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i <= size ; i++)
	{
		if (size != 0)
		{
			_putchar('#');
				for (j = 0 ; j <= size ; j++)
				{
		 		_putchar('#');	
				}
		}
		 _putchar('\n');

	}
	_putchar('\n');
}
