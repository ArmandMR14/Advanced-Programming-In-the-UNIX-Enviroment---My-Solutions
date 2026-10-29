#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int
main()
{
	int origin = open("origen.txt", O_RDONLY);
	int destino = open("copia.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	char buffer [512];

	ssize_t bytes_leidos;

	if (origin > 0)
	{
		while ((bytes_leidos = read(origin, buffer, sizeof(buffer))) > 0)
		{
			write (destino, buffer , bytes_leidos);
		}

	}else
		printf("error de archivo de origen");
	close(origin);
	close(destino);
}

