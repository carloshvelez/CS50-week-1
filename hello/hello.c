# include <stdio.h>
# include <cs50.h>

int main (void)
{
    string nombre = get_string("Name: ");
    printf("Hello, %s\n", nombre);
}