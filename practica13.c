#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j, habitaciones, tempbaja,tempmedia,tempalta;

    printf("Escriba el numero de habitaciones\n");
    scanf("%i", &habitaciones);

    int matriz[habitaciones][4]; 

    
    for (i = 0; i < habitaciones; i++)
    {
        printf("Habitacion %i:\n", i+1);
        printf("Ingresa ID, tempbaja, tempmedia, tempalta:\n");
        for (j = 0; j < 4; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
    for ( i = 0; i < habitaciones; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (j==1)
            {
                tempbaja= tempbaja+ matriz[i][j];
            }
            if (j==2)
            {
                tempmedia= tempmedia+ matriz[i][j];
            }
            if (j==3)
            {
                tempalta= tempalta+ matriz[i][j];
            }
        }
        
    }
    float promediotempbaja= tempbaja/habitaciones;
    float promediotempmedia= tempmedia/habitaciones;
    float promediotempalta= tempalta/habitaciones;

    printf("El promedio de tmporada baja es:%.2f\n", promediotempbaja);
    printf("El promedio de tmporada media es:%.2f\n", promediotempmedia);
    printf("El promedio de tmporada alta es:%.2f\n", promediotempalta);
    return 0;
}
