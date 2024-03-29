#include "main.h"
/**
 * reate_file -thhis creates the files
 * @text_content: this is the content to write in the file
 * @filename: this is the file name to be created
 * Return: this will return 1 when it is success, returns -1 when it  failures
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0 ; 

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);

	return (1);
}
