#include <stdio.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
	printf("Thread id %ld\n", syscall(SYS_gettid));
	return 0;
}
