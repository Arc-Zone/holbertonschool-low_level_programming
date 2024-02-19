#include <stdio.h>

/*
 * Write a C program that prints the size of various types on the computer it is compiled and run on.
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a char: %lu byte(s)\n",  (unsigned long)sizeof(int));
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a char: %lu byte(s)\n",  (unsigned long)sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n",  (unsigned long)sizeof(float));

	return(0);
}