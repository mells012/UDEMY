#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char a,b,c;

    printf("Escriba 3 caracteres:\n");
    scanf(" %c",&a);
    scanf(" %c",&b);
    scanf(" %c",&c);
    printf("Los caracteres fueron:\n-%c -%c -%c",a,b,c);
    return 0;
}
