#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 arguments
 * @argc: int
 * @argv: string
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
