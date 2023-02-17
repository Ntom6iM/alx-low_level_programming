#include <stdio.h>
/**
 * main - prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("size of a char % byte(s)\n", sizeof(char));
printf("size of an int %lu byte(s)\n", sizeof(int));
printf("size of a long int %lu byte(s)\n", sizeof(long int));
printf("size of long long int %lu byte(s)\n", sizeof(long long int));
printf("size of float %lu byte(s)\n", sizeof(float));
	return (0);
}
