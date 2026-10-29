#include <fcntl.h>
#include <stdio.h>
#include <string.h>

void
func()
{
	int fd;
	if ((fd = open (path, O_RDONLY)) < 0)
	{
		perror("unable to open");
		exit (EXIT_FAILURE);
	}
	(void) close(fd);

}

int
main()
{

	func();
	
}

