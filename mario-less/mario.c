# include <stdio.h>
# include <cs50.h>

int main(void)
{
    // Solicitar número dentro de los parámetros.
    int n;
    do
    {
        n = get_int("Height :");
    }
    while (n < 1 || n > 8);

    int j = 1;
    // Pintar los cuadros de acuerdo con la altura ingresada
    while (n > j - 1)
    {
        for (int i = 0; i < n - j; i++)
        {

            printf(" ");
        }

        for (int i = 0; i < j; i++)
        {

            printf("#");
        }
        printf("\n");
        j++;
    }

}