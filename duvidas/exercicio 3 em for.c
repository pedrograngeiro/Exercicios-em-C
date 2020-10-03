#include <stdio.h>
int main ()
{
    long i, aux, x;
    x = 5;
    aux = 0;

    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            aux = aux + i;   
        }
        
    }
    if (aux == x)
        {
            printf("%d eh um numero perfeito\n", aux);
        }
    return(aux);
}