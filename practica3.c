#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float base,altura,area;

    printf("Ingrese la base y altura del rectangulo:\n");
    scanf(" %f",&base);
    scanf(" %f",&altura);
    area=base*altura;
    printf("El area del rectangulo es:%.2f\n",area);
    return 0;
}