#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */

int main(void)
{
	char ch, i;
      /*print lowercase letters*/
	for (i = 'a'; i <= 'z'; i++)
	{
	      putchar (i);
	}
      /* print uppercase letters */
	for (ch = 'A'; ch <= 'Z' ; ch++)
	{	putchar(ch);
	}
	{
	putchar('\n');
}
return (0);
}
