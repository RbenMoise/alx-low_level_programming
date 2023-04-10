#include "main.h"
#include <stdio.h>

/**
 * error_file - this function will checks if files can be openedor not
 * @file_from: for filling the form file
 * @file_to: file
 * @argv: x
 * Return: 0.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry poin
 * @argc:c
 * @argv: v
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, errorclose;
	ssize_t nc, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nc = 1024;
	while (nc == 1024)
	{
		nc = read(file_from, buffer, 1024);
		if (nc == -1)
			error_file(-1, 0, argv);
		w = write(file_to, buffer, nc);
		if (w == -1)
			error_file(0, -1, argv);
	}

	errorclose = close(file_from);
	if (errorclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	errorclose = close(file_to);
	if (errorclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
