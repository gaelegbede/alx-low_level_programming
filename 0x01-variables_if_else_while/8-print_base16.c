#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *
 *
 */
int main(void)
{
	int c;
	char i;

	for (c = '1'; c <= '9'; c++)
{
	putchar (c);
}
	for(i = 'a'; i <= 'f'; ++i)
{
	putchar(i);
}

	putchar('\n');

	return (0);
	}
