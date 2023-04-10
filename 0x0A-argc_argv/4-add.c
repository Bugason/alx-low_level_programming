#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check_num - checks string if there is a digit
 * @str: string array
 *
 * Return: always 0
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: arguments
 * @argv: arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_int = atoi(argv[count]);
			sum += str_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
