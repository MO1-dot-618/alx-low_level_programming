#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%d\n",hash_table_set(ht, "hetairas", "cool"));
	printf("%d\n", hash_table_set(ht, "mentioner", "coolen"));
	 printf("%d\n", hash_table_set(ht, "mentioner", "coolenfttyuug"));
    printf("%d\n", hash_table_set(ht, "", "coolen"));
    printf("%d\n",hash_table_set(ht, "mentioner", NULL));
    return (EXIT_SUCCESS);
}
