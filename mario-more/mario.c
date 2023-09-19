#include <stdio.h>
#include<cs50.h>

int main(void)
{
    //Solicita la altura
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    int j = 1;

    //Escribe los cuadros

    while (j - 1 < n)
    {
    for (int i = 0; i < n - j; i++)
        {

            printf(" ");
        }

    for (int i = 0; i < j; i++)
        {

            printf("#");
        }



        printf("  ");

        for (int i = 0; i < j; i++)
        {
            printf("#");
        }

        printf("\n");
        j++;
    }

}