# include <unistd.h>
#include <sys/syscall.h>
/**
 * main - Entry point
 *Return: Always 1 (Success)
*/
int main ()
{
	const char msg[] ="and that piece of art is useful\n"- Dora Korpar, 2015-10-19";
	syscall(SYS_write, 1, msg, sizeof(msg));
	return 1;
}
