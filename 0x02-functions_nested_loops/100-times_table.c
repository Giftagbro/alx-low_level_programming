#include <stdio.h>
#include "main.h"
/**
 * print_times_table - program that prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
    int i, j;
    int product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= 10; j++)
        {
            product = i * j;
            printf("%d\t", product);
        }
        printf("\n");
    }
}
