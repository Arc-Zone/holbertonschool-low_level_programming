#include "main.h"
#include <stdioh>

int main ()
{
	int i ;
	
	for(i = 0 ; i <= 100 ; i++)
	{
		if(i % 3 == 0){
			printf('Fizz');
		} else if (i % 5 == 0)
		{
			printf('Buzz');
		} {
			 printf('FizzBuzz');
		}		
		_putchar('0' + i);
	}		
_putchar('\n')
}
