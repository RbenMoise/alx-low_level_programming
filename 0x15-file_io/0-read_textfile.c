#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - this will reads a text file and prints it to stdout.
 * @filename: this is the name of the file to be written
 * @letters: this is the number of letters to be read and to be printed 
 *
 * Return: this is th eactual number of letters to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(opn);

	return (wrt);
}  
