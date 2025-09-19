#include <stdio.h>
#include <string.h>
#include <dirent.h>

void check_dependencies(const char directory[], const char library[])
{
	DIR *dirp;
	struct dirent *direntp;

	dirp = opendir(directory);

	if (dirp == NULL)
	{
		fprintf(stderr, "can't open '%s' directory", directory );
	}
	else
	{
		while (true)
		{
			direntp = readdir(dirp);
			if (direntp == NULL )
			{
				break;
			}
			if (strcmp(direntp->d_name, library) == 0)
			{
				printf("\033[36mlibtheLib.so\033[0m : are find\033[0m\n");
			}
			printf( "\033[2m\033[35m%s\033[0m\n", direntp->d_name );
			}
		closedir(dirp);
	}
}

int main()
{
	check_dependencies(".", "test");

	printf("hi friend!\n");
}
