#include <stdio.h>
#include <stdlib.h>
/**
 * main - coins
 * @argc: int
 * @argv: string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, coins = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
		}

	change = atoi(argv[1]);
	coins = change / 25;
	change = change % 25;
	coins = coins + (change / 10);
	change = change % 10;
	coins = coins + (change / 5);
	change = change % 5;
	coins = coins + (change / 2);
	change = change % 2;
	coins = coins + (change / 1);
	change = change % 1;
 
	}
	return (0);
}
