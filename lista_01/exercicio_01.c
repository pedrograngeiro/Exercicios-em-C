#include <stdio.h>

/*
Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições : 
n / 3 = x inteiro e resto 2
n / 5 = y inteiro e resto 3
n / 7 = z inteiro e resto 4 
*/

int main()
{
    int i;
    for (i = 0; ; i++)
    {
        if ( (i % 3 == 2) && (i % 5 == 3) && (i % 7 == 4) )
        {
            printf("%d", i);
            break;
        }
    }
}
