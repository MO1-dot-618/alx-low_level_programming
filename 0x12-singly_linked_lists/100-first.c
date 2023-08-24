#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * before_main - do this before main
 * Return: no return
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
