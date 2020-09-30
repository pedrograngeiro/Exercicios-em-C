#include <stdio.h>

int primo (int n);

int main(){
    int n, resultado;
    printf("Entre com o valor de n:");
    scanf("%d", &n);

    if (primo(n) == 2)
    {
        printf("\n%d eh primo", n);
    }else
    {
        printf("\n%d nao eh primo", n);
    }
    return 0;
}

int primo (int n)
{
    int i, tot;
    tot = 0;

    for (i=1 ; i<=n; i = i + 1 )
    {
        if (n % i == 0)
        {
            tot++;
        }

    }
    return(tot);
}