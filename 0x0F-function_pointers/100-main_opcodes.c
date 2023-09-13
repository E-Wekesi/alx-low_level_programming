#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number of bytes to print
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%.2hhx", a[index]);
		if (index < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: always O
 */
int main(int argc, char **argv)
{
	int num1;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num1 = atoi(argv[1]);
	if (num1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, num1);
	return (0);
}
