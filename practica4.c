#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float euros,pesetas;

    printf("Ingrese el valor en euros:\n");
    scanf(" %f",&euros);
    pesetas=euros*166.386;
    
    printf("El valor en pesetas es:%.2f\n",pesetas);
    return 0;
}