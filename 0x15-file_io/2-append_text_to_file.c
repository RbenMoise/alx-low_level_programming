#include "main.h"

/**
 * append_text_to_file - this will apend the text to the files
 * @filename: file 
 * @text_content: content fir the file to be appended
 * Return: 1 if it is success and -1 if it is not successfull
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, len, wrt;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_APPEND | O_WRONLY);
	if (opn == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(opn);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;
	wrt = write(opn, text_content, len);
	if (wrt < 1)
		return (-1);
	close(fd);
	return (1);
}
