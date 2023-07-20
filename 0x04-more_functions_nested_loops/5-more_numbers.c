#include "main.h"

/**
 *more_numbers - print from 0 to 9
 *Return: void
 **/
void more_numbers(void)
{
	int i,j,left, right;
	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			left= i/10;
			right=i%10;
			if (i >= 10)
			{
				_putchar(left+48);
			}
			_putchar(right+48);
		}
		_putchar('\n');
}
