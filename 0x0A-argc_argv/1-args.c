#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed from the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argvv[])
{
	(void)argvv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
