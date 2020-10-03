#include <stdio.h>
long inteiro_perfeito (int x);

int main()
{
    int x, resultado;
    long j, n;
	j = 32767; // até onde vai testar


    
    for (n = 1; n <= j; n++)
    {
    	x = n;
		inteiro_perfeito(x);
	}


    return 0;
}

long inteiro_perfeito (int x)
{
    long i, aux;
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