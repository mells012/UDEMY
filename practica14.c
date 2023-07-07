#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int cadena[4][100],i;

    for ( i = 0; i < 4; i++)
    {
        printf("Escribe la cadena%i:\n",i+1);
        gets(cadena[i]);
    }
    
    printf("Las cadenas son:\n");
    for ( i = 0; i < 4; i++)
    {
        
        printf(" - %s", cadena[i]);
    }
    
     return 0;
}