#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid, my_pid2;

	my_pid = getppid();
	my_pid2 = getpid();
	printf("%u\n, %u\n", my_pid, my_pid2);
	return (0);
}
