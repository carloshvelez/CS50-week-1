#include <cs50.h>
#include <stdio.h>

long obtener_numero(void);
int verificar_numero(long numero);
int contar_digitos(long numero);
int obtener_dos_digitos(long numero);


int main(void)
{
    long numero = obtener_numero();
    int verificacion = verificar_numero(numero) % 10;
    int n_digitos = contar_digitos(numero);
    int digitos = obtener_dos_digitos(numero);
    //printf("%i\n%idígitos\nprimeros dos digitos: %i\n", verificacion, n_digitos, digitos);

    if (n_digitos == 15 && (digitos == 34 || digitos == 37) && verificacion == 0)
    {
        printf("AMEX\n");
    }
    else if (n_digitos == 16  && (digitos >= 51 && digitos <= 55) && verificacion == 0)
    {
        printf("MASTERCARD\n");
    }
    else if ((n_digitos == 13 || n_digitos == 16)  && (digitos >= 40 && digitos <= 49) && verificacion == 0)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }





}

long obtener_numero(void)
{
    long numero = get_long("Number:  ");
    return numero;
}

int verificar_numero(long numero)
{
    int contador_pares = 0;
    for (long n = numero / 10; n != 0; n /= 100)
    {
        int npar = (((n % 10) * 2) % 10) + ((int)(n % 10 * 2 / 10));
        contador_pares += npar;

    }

    for (long n = numero; n != 0; n /= 100)
    {

        int ninpar = n % 10;
        contador_pares += ninpar;
    }
    return contador_pares;
}

int contar_digitos(long numero)
{
    int contador = 0;
    for (long n = numero; n != 0; n /= 10)
    {
        contador++;
    }
    return contador;
}

int obtener_dos_digitos(long numero)
{

    //int digitos;
    do
    {
        numero /= 10;
    }
    while (numero > 100);
    return numero;
}