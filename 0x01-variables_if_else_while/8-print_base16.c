#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Return: Always 0 success
 */
int main(void)
{
	int c;
	char i;

	for (c = '0'; c <= '9'; c++)
{
	putchar (c);
}
	for (i = 'a'; i <= 'f'; ++i)
{
	putchar(i);
}

	putchar('\n');

	return (0);
	}
