// THE HEADERS //

#include <stdio.h>
#include <stdlib.h>

//DECLARATES MAIN AS VOID //

void
main()
{
	// declarating a pointer called shell that stores the getenv return value //
	char *shell  = getenv("SHELL");
	// and finally prints the shell value //
	printf("The current shell is %s.\n", shell);
}
