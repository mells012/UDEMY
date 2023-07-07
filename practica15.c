#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i=0, pos=-1;
    char cadena[100], caracter;
   

    printf("Escribe la cadena:\n");
    gets(cadena);

    printf("Escribe el caracter:\n");
    scanf(" %c", &caracter);
    
    while (cadena[i]!='\0' && pos==-1)
    {
        if (cadena[i]== caracter)
    {
       pos=i;
    }
        i+=1;
    }
    
    if (pos!=-1)
    {
        printf(" %c esta en la cadena, en la posicion %i\n", caracter, i);
    }
    else
    {
        printf("el caracter no esta en la cadena\n");
    }
    
    
     return 0;
}