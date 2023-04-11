#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check1 - no of arg
 * @argc: c
 *
 * Return: void
 */
void check1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check2 - check if exist
 * @check: this will checks if true of false
 * @file: file name
 * @fd_from: filedesc
 * @fd_to: filedesc
 * Return:  nothisnd
 */
void check2(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check3 - checks for the created files
 * @check: this will chec if true of false
 * @file: file_to name
 * @fd_from: file desc
 * @fd_to: file dsc
 * Return: nothing
 */
void check3(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check4 - checks of file was closed with no errors
 * @check: this willchecks if true or false
 * @fd: file dsc
 * Return:nothing
 */
void check4(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - this transfers the content of the file to the other file
 * @argc: this rep the no of arg passed
 * @argv: pointer array to the arguments
 * Return: 0 otherwise
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t len1, len2;
	char buf[1024];
	mode_t file_r;

	check1(argc);
	fd_from = open(argv[1], O_RDONLY);
	check2((ssize_t)fd_from, argv[1], -1, -1);
	file_r = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_r);
	check3((ssize_t)fd_to, argv[2], fd_from, -1);
	len1 = 1024;
	while (len1 == 1024)
	{
		len1 = read(fd_from, buf, 1024);
		check2(len1, argv[1], fd_from, fd_to);
		len2 = write(fd_to, buf, len1);
		if (len2 != len1)
			len2 = -1;
		check3(len2, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check4(close_to, fd_to);
	check4(close_from, fd_from);
	return (0);
}
