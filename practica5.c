#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nota;

    printf("Ingrese la nota del alumno:\n");
    scanf(" %f",&nota);
    if (nota<5 && nota>=0)
    {
        printf("Ha suspendido\n");
    }
    else if (nota==5)
    {
        printf("Ha sacado suficiente\n");
    }
    else if (nota==6)
    {
        printf("Ha estado bien\n");
    }
    else if (nota>6 && nota<9)
    {
        printf("Ha sacado notable\n");
    }
    else if (nota>8 && nota<11)
    {
        printf("Ha sacado un sobresaliente \n");
    }
    
    else{
        printf("Ingrese bien la nota\n");
    }
    return 0;
}