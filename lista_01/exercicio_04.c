#include <stdio.h>

long fatorial (int n);

int main(){
    int n;

    printf ("Digite um numero para calcular o fatorial: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("\nO numero digitado eh menor que 0.\n");
        printf("Digite um numero maior que 0 para calcular o fatorial.");
        scanf("%d", &n);
    }
    printf("%lld ", fatorial(n));

    return 0;
}

long fatorial (int n)
{
    long res;
    if (n == 0)
    {
        res = 1L;
        return res;
    }
    res = n * fatorial(n-1);
    return res;
}