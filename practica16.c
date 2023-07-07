#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i;
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for (i = 0; i < 5; i++)
    {
        printf("Jugador %i:\n", i + 1);
        printf("Ingrese el nombre del jugador:\n");
        fflush(stdin);
        gets(jugadores[i].nombre);
        printf("Ingrese la edad del jugador:\n");
        scanf("%d", &jugadores[i].edad);
        printf("Ingrese la altura del jugador:\n");
        scanf("%f", &jugadores[i].altura);
        fflush(stdin);
    }

    int opcion;
    char nombreingresado[50];
    int encontrado = 0;

    do
    {
        printf("Que desea hacer ahora:\n");
        printf("1) Listar nombre y alturas de los jugadores\n");
        printf("2) Buscar un jugador por su nombre y presentar su altura y su edad\n");
        printf("3) Indicar el nombre y edad del jugador mas alto del equipo\n");
        printf("0) Salir\n");

        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Lista:\n");
            for (i = 0; i < 5; i++)
            {
                printf("%s - %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
            break;

        case 2:
            printf("Ingrese el nombre del jugador a buscar:\n");
            fflush(stdin);
            gets(nombreingresado);

            for (i = 0; i < 5; i++)
            {
                if (strcmp(nombreingresado, jugadores[i].nombre) == 0)
                {
                    encontrado = 1;
                    printf("%s: \n altura - %.2f \n edad -  %i\n", jugadores[i].nombre, jugadores[i].altura, jugadores[i].edad);
                    break;
                }
            }

            if (!encontrado)
            {
                printf("No se encontró ningún jugador con ese nombre.\n");
            }
            break;

        case 3:
            float maximo = jugadores[0].altura;
            int indiceMaximo = 0;

            for (i = 1; i < 5; i++)
            {
                if (jugadores[i].altura > maximo)
                {
                    maximo = jugadores[i].altura;
                    indiceMaximo = i;
                }
            }

            printf("El jugador mas alto del equipo es:\n");
            printf("%s - su edad:%i\n", jugadores[indiceMaximo].nombre, jugadores[indiceMaximo].edad);
            break;

        case 0:
            printf("Saliendo...\n");
            break;

        default:
            printf("Ingrese una opción válida.\n");
            break;
        }

    } while (opcion != 0);

    return 0;
}
