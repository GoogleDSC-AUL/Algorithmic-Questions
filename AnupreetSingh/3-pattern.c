//program for making a star pyramid

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}