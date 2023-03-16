#include <stdio.h>
/**
* print size - Prints size of size of 
* main function = entry point
* Return:always zero if succesful
*/
int main(void)
{
	printf("char size: %lu byte(s)\n", sizeof(char));
	printf("int size: %lu byte(s)\n", sizeof(int));
	printf("long int size: %lu byte(s)\n", sizeof(long int));
	printf("long long int size: %lu byte(s)\n", sizeof(long long int));
	printf("float size: %lu byte(s)\n", sizeof(float));
	return (0);
}
/**
* is positive - number checked if greater than 0 
* Return: 1 if the number is positive.0 otherwise
*/
