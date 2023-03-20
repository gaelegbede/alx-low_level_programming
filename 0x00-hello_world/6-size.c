#include<stdio.h>

/**
 * main - Entry point
 *Return: Always 0 (Success)
*/
int main()
{
	int intType;
	float floatType;
	long int  longtype;
	char charType;
	long long int longltype;
	sizeof evaluates the size of a variable
		printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
