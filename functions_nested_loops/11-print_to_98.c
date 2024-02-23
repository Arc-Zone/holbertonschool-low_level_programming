#include "main.h"
void print_to_98(int n)
{
	if( n < 98 )
	{
		for( i = n ; i < 98 ; i++)
		{
			_putchar(i);
		}
			
	}else if (n > 98)
		for( i = n ; i  > 98 ; i--){
			_putchar(i);
		}
}
