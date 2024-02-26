#include "main.h"

int main ()
{
	int i ;
	
	for(i = 0 ; i <= 100 ; i++)
	{
		if(i % 3 == 0){
			_putchar('Fizz');
		} else if (i % 5 == 0)
		{
			_putchar('Buzz');
		} {
			 _putchar('FizzBuzz');
		}			
		_putchar('0' + i);
	}		
_putchar('\n')
}
