#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints OpCodes
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program doesn't receive two arguments - 1.
 *         If the number of bytes is negative - 2.
 */
int main(int argc, char *argv[])
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	__asm__(
	"mov $1, %%rax\n"
	"mov $1, %%rdi\n"
	"lea %[main], %%rsi\n"
	"mov $[b], %%rdx\n"
	"syscall\n"
	:
	: [main] "i" (main)
	: [b] "r" (b)
	: "rax", "rdi", "rsi", "rdx"
	);
	return (0);
}
