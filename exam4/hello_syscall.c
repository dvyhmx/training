#define _GNU_SOURCE
#include <sys/syscall.h>

void main()
{
	syscall(SYS_write, 1, "SYSCALL: Hello World!\n",22);
}
