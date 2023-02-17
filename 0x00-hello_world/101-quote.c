#include <stdio.h>
#include <unistd.h>
/**
 * main - c programme that prints a line to the standard error
 * Return: 1 (success)
 */
int main(void)
{
	char s[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", s);
		return (1);
}
