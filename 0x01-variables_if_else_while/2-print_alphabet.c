
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *Return: 0 after printing function
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
