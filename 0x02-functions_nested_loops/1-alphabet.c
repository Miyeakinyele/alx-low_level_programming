#include "main.h"

/**
 * main - print_alphabet
 * print_alphabet fuction that prints alphanet in lowercase
 *
 * return: alawys 0;
 */


void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}

