#include "main.h"

/**
 * _strlen - this function will help find the length of the string
 * @str: this is the string pointer
 * Return: this will give us the len of the string
 */
size_t _strlen(char *str)
{
	size_t k;

	for (k = 0; str[k]; k++)
		;
	return (k);
}

/**
 * append_text_to_file - appends text
 * @filename:  file name
 * @text_content: content
 * Return: 1 if it is  successfull and it will return  -1 if it failures
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/**p is the lenght to be checked*/
	int j;
	ssize_t p;

	if (filename == NULL)
		return (-1);
	j = open(filename, O_WRONLY | O_APPEND);
	if (j == -1)
		return (-1);
	if (text_content != NULL)
		p = write(j, text_content, _strlen(text_content));
	close(j);
	if (len == -1)
		return (-1);
	return (1);
}
