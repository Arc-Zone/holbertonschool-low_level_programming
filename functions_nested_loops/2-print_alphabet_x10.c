#include "main.h"

void print_alphabet_x10(void)
{

	int i;

	for (i = 0 ; i < 11 ; i++)
	{
		char alphabet = 'a';
		while (alphabet <= 'z')
		{
		_putchar(alphabet);
		alphabet++;
		}
		_putchar('\n');
	}
	
}
