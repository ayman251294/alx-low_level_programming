#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if successful, 1 if error occurs
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;
    printf("%d\n", result);
    return (0);
}
