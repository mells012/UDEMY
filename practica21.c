#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359
int main(int argc, char const *argv[])
{
    struct structcilindro
    {
        float diametro, carrera;
    };
    struct motor
    {
        int identificador, numerocilindros;
        float cilindrada;
        struct structcilindro cilindro;
    };

    struct motor motor1;
    
    printf("Escriba indentificador, numero de cilindros, diametro(milimetros) y carrera(milimetros):\n");
    scanf("%i %i %f %f",&motor1.identificador,&motor1.numerocilindros,&motor1.cilindro.diametro,&motor1.cilindro.carrera );

    motor1.cilindro.diametro=motor1.cilindro.diametro/10;
    motor1.cilindro.carrera=motor1.cilindro.carrera/10;
    
    motor1.cilindrada=(motor1.numerocilindros*motor1.cilindro.carrera*PI*(pow(motor1.cilindro.diametro,2)))/4;

    printf("Informacion del motor:\n");
    printf("Identificador:%i\n",motor1.identificador);
    printf("Cilindro:\n Diametro(centimetros):%.2f\n Carrera(centimetros):%.2f\n",motor1.cilindro.diametro,motor1.cilindro.carrera);
    printf("Numero de cilindros:%i\n",motor1.numerocilindros);
    printf("Cilindrada:%.2f\n",motor1.cilindrada);
  

    return 0;
}