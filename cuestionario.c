
#include <stdio.h>

main(){
    int a,i,T=0;

    a=9;
    for(i=0;i<100;i++)
        if((a%4==0)||(i%2)==0)
            printf("%d %d\n",a,i);
}