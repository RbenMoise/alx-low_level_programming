#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: names
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}

