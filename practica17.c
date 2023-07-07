#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    float promedio, vector[5], sumadepunteros;

    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el numero %i:\n", i + 1);
        scanf("%f", &vector[i]);
    }

    float *puntero = &vector[0];

    for (i = 0; i < 5; i++)
    {
        sumadepunteros += *puntero;
        puntero++;
    }

    promedio = sumadepunteros / 5;

    printf("La suma es: %.2f\n", sumadepunteros);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}

