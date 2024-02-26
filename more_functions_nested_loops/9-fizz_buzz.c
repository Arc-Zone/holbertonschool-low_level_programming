#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


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
		printf('0' + i);
	}		
printf('\n')
}
