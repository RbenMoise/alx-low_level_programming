#include "main.h"

/**
 * _strlen - this function will help us to find the lenth of the string
 * @str: string pointer
 * Return: len
 */
size_t _strlen(char *str)
{
	size_t me;

	for (me = 0; str[me]; me++)
		;
	return (me);
}

/**
 * append_text_to_file - append to the end of the file
 * @filename: file name
 * @text_content:content of the file
 * Return: 1 otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int po;
	ssize_t sz;

	if (filename == NULL)
		return (-1);
	po = open(filename, O_WRONLY | O_APPEND);
	if (po == -1)
		return (-1);
	if (text_content != NULL)
		sz = write(po, text_content, _strlen(text_content));
	close(po);
	if (sz == -1)
		return (-1);
}
