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
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' &&  alphabet != 'q' )
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
