#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int contador = 0,numero, sumanumero = 0, promedio;

    printf("Ingresa los numeros que deseas (ingresa 0 para terminar):\n");
    

    while (numero != 0)
    {
        scanf("%i", &numero);
        sumanumero =sumanumero+ numero;
        contador++;
        
    }

        promedio = sumanumero / contador;
        printf("La suma de todos los elementos es: %i\n", sumanumero);
        printf("El promedio de todos los elementos es: %i\n", promedio);
   
    return 0;
}
