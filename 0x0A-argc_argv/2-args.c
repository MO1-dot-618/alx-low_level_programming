#include <stdio.h>
/**
 * main - print all arguments
 * @argc: int
 * @argv: string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
