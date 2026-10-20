#include <stdio.h>
#include <unistd.h>

void
main()
{
	printf("I am the proccess with proccess-id %d\n", getpid());
}
