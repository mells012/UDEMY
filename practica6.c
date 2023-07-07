#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float preciobase,kilometros,consumo,preciototal;

    printf("Ingrese el precio base, kilometraje, y tiempo de consumo(en ese orden):\n");
    scanf(" %f %f %f",&preciobase,&kilometros,&consumo);
    if (kilometros<20000 && consumo<=5)
    {
        preciototal=preciobase*1.2;
    }
    else if (kilometros>20000 && consumo<=5)
    {
        preciototal=preciobase*1.1;
    }
    if (consumo>5)
    {
        preciototal=preciobase*1.05;
    }
    else{
        printf("Ingrese bien los datos\n");
    }

    printf("El precio final es:%.2f\n",preciototal);

    return 0;
}