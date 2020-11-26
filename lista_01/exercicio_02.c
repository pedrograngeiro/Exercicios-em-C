#include <stdio.h>
#include <stdlib.h>
// 2) Escreva um programa em C que verifique se um determinado inteiro positivo que é lido via teclado, é ou não primo.
int primo (int n);


int main(){
    int n, resultado;
    printf("Entre com o valor de n: ");
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


//Essa função chamada primo, testa se o número é primou não
//Considerando que um numero primo só tem 2 divisores.
// 1 e ele mesmo
//A variavel tot acumula o número de divisores
//O laço for testa se o numero é divisor ou não, se sim, tot recebe 1

int primo(int n){
    int i, tot;
    tot = 0;// zera a variavel

    for(i=1; i<=n; i++){
        if(n % 2 == 0){
            tot++;
        }
    }
    return tot;// Passa o valor de tot para a função main
}
