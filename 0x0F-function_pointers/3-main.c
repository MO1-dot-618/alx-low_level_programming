#include "3-calc.h"
/**
 * main - claculate a op b
 *
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Success (0), if number of arg is wrong (98),
 *		if operator is wrong (99),
 *		division by 0 (100).
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int a, b;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b));
	return (0);
}
