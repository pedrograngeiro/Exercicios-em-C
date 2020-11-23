#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b , c, condMultiplo;

    a = 100;
    c= 0;

    printf("Informe o segundo numero: ");
    scanf("%i", &b);

    condMultiplo = a % b;

    while(a != 0){

        if (a >= b){
            condMultiplo = a % b;
        }else{
            condMultiplo = b % a;
        }

        if ( condMultiplo == 0) {
            printf("O numero %i eh multiplo de %i. \n", a, b);
        }else{
            //printf("O numero %i nao eh multiplo de %i. \n", a, b);
        }
        a = a - 1;
    }
    return 0;
}
