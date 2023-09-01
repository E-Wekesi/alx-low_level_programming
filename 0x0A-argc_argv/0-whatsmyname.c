#include <stdio.h>
/**
 * main - prints a name, followed by a new line.
 * @argc: command line arguments.
 * @argv: array of command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
