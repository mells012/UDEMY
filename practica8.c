#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;

    for ( i = 1; i <=100; i++)
    {
        if (i%3==0)
        {
            printf("%i\n",i);
        }
        
    }

    return 0;
}