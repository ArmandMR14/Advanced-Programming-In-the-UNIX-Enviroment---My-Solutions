#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int
main()
{
	// Here is declarating the functions //
	
	const char *filename = "example.txt";

	// The flags of open() function //
	
	int flags = O_WRONLY | O_TRUNC;

	// the open() function //
	// on the flags, is Write only and trunc for set the size of the file on 0 bytes//
	// so it works, because the function flags doesnt require the read flag and only set the size to 0 bytes //
	
	int fd = open(filename, flags);
	
	// if there is any error //
	
	if (fd == -1)
	{
		printf("Erorr opening file :%s\n", strerror(errno));
		return 1;
	}

	//printing the file descriptor //

	printf("File descriptor : %d\n", fd);
	// ever and ever close the file descriptor //
	close (fd);
	return 0;
}
