#include <stdio.h>
#include <stdlib.h>

void multiplicacion(int *puntero, int numero);

int main(int argc, char const *argv[])
{
    int vector[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    multiplicacion(&vector[0], 2);

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", vector[i]);
    }

    return 0;
}

void multiplicacion(int *puntero, int numero)
{
    for (int i = 0; i < 10; i++)
    {
        *puntero = (*puntero) * numero;
        puntero++;
    }
}
