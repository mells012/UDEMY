#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i,alumnos, aprobados=0,suspensos=0;
    float notas;

    printf("Cuantos alumnos desea ingresar:\n");
    scanf("%i",&alumnos);

    for ( i = 0; i <alumnos; i++)
    {
        printf("Nota de alumno%i:\n",i+1);
        scanf("%f",&notas);
        if (notas>=5 && notas<11)
        {
            aprobados++;
        }
        else if (notas<5 && notas>-1)
        {
            suspensos++;
        }
        else 
        {
            printf("Debe ingresar bien las nota\n");
            return 0;
        }
        
    }
    printf("Los alumnos aprobados son: %i\n",aprobados);
    printf("Los alumnos suspensos son: %i\n",suspensos);

    return 0;
}