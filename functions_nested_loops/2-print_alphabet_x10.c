#include "main.h"

void print_alphabet(void)
{
	char alphabet = 'a';
	int i;
	for(i = 0 ; i < 11 ; i++)
	{

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	}
}
