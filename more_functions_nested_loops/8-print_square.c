#include "main.h"
void print_square(int size)
{
	int i, j;
	
	   if (size != 0)
	   {
		   putchar('\n');
	   }
	for (i = 0 ; i <= size ; i++)
	{
	
			_putchar('#');
				for (j = 0 ; j <= size ; j++)
				{
		 		_putchar('#');	
				}
		
		 _putchar('\n');

	}
	_putchar('\n');
}