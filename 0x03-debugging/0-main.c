#include "main.h"

/**
 * main - prints if integer is positive or negative
 *
 * @i: the integer
 *
 * Return: Always 0
 */
void positive_or_negative(int i)
{
        if (i < 0)
                printf("%d is negative\n", i);
        else
                printf("%d is positive\n", i);
}
