#include "main.h"

/**
  * open_file - File opener
  * @filename: File to open
  *
  * Return: File descriptor
  */
FILE *open_file(char *filename)
{
	FILE *fd = NULL;

	check_access_rights(filename);

	fd = fopen(filename, "r");

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (fd);
}
