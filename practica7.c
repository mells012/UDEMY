#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dia;
    printf("Ingrese un numero del 1 al 7:\n");
    scanf("%i",&dia);
    switch (dia)
    {
    case 1:
        printf("Es lunes\n");
        break;
    case 2:
        printf("Es martes\n");
        break;
    case 3:
        printf("Es miercoles\n");
        break;
    case 4:
        printf("Es jueves\n");
        break;
    case 5:
        printf("Es viernes\n");
        break;
    case 6:
        printf("Es sabado\n");
        break;
    case 7:
        printf("Es domingo\n");
        break;
    
    default:
        printf("Ingrese bien el dia\n");
        break;
    }

    return 0;
}