#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float vector[5], sumavector = 0, promedio;
    int i, menorpeso = 0, mayorpeso = 0;

    printf("Ingresa el peso de 5 personas:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Persona %i:\n", i + 1);
        scanf("%f", &vector[i]);
        sumavector += vector[i];
    }

    promedio = sumavector / 5;

    for (i = 0; i < 5; i++)
    {
        if (vector[i] < promedio)
        {
            menorpeso++;
        }
        else if (vector[i] > promedio)
        {
            mayorpeso++;
        }
    }

    printf("El promedio es: %.2f\n", promedio);
    printf("La personas que pesan más que el promedio son: %i\n", mayorpeso);
    printf("La personas que pesan menos que el promedio son: %i\n", menorpeso);

    return 0;
}
