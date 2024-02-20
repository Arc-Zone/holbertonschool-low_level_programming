#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : print size
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i ;
	for(i = 0; i<10; i++)
	{
		putchar('0'+ i);
	}

	char a = 'a';
	while(a < 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');	
}
