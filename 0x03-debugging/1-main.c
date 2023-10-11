#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0; /*i is initialized to 0 just before the while loop and not incremented in the while loop*/

        while (i < 10) /*while condition is given, an if the value of i is less than 10, the loop iterates*/
        {
                putchar(i); /*i is not incremented (i++); thus i remains 0 causing an infinite loop in the code*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
