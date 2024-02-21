#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int _putchar(char c);
void print_alphabet(void)
{
        char alphabet = 'a';

        while (alphabet <= 'z')
        {
                putchar(alphabet);
                alphabet++;
        }
        putchar('\n');
}
