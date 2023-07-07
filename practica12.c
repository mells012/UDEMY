#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    float vector[10], maximo , minimo ;

    printf("Ingresa 10 elementos:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Persona %i:\n", i + 1);
        scanf("%f", &vector[i]);
        
    }

    maximo = vector[0];
    minimo = vector[0];

    for ( i = 1; i < 10; i++)
    {
        if (vector[i] > maximo)
        {
            maximo= vector[i];
        }
        if (vector[i] < minimo)
        {
            minimo= vector[i];
        }
    }
    


    printf("El valor maximo es: %.2f\n", maximo);
    printf("El valor minimo es: %.2f\n", minimo);

    return 0;
}
