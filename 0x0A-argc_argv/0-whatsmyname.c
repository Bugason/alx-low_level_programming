#include "main.h"
#include <stdio.h>
/**
 * main - prints a program name
 * @argc: number of arguments
 * @argv: array
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
