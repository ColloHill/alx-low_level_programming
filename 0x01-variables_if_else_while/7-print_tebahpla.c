#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 * Return: A value
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
