#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    char opcion = 'S';
    struct horaacceso
    {
        int hora, minuto;
    };
    struct informacion
    {
        int asistentes;
        float edad[100], preciototal;
        struct horaacceso horario;
    };

    struct informacion grupo;

    do
    {
        printf("Escriba la hora, minutos, numero de asistentes y las edades:\n");
        scanf("%i %i %i", &grupo.horario.hora, &grupo.horario.minuto, &grupo.asistentes);

        for (i = 0; i < grupo.asistentes; i++)
        {
            printf("Edad del %i asistente:\n", i + 1);
            scanf("%f", &grupo.edad[i]);
        }

        grupo.preciototal = 0;

        for (i = 0; i < grupo.asistentes; i++)
        {
            if (grupo.edad[i] < 6)
            {
                grupo.preciototal += 0;
            }
            else if (grupo.edad[i] >= 6 && grupo.edad[i] <= 15)
            {
                grupo.preciototal += 5;
            }
            else if ((grupo.edad[i] >= 16 && grupo.edad[i] <= 26) || grupo.edad[i] > 65)
            {
                grupo.preciototal += 8;
            }
            else
            {
                grupo.preciototal += 10;
            }
        }

        if (grupo.asistentes > 5)
        {
            grupo.preciototal *= 1.1;
        }

        printf("El precio total es: %.2f\n", grupo.preciototal);
        printf("Desea introducir datos de un nuevo grupo? S) Si N) No\n");
        scanf(" %c", &opcion);
    } while (opcion != 'N');

    printf("Actividad finalizada. Nos vemos la proxima.\n");

    return 0;
}
