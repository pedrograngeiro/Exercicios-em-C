#include <stdio.h>
#include <stdlib.h>

void limpaTela(){
    //Limp a tela
    system("CLS");
}

int main(){

    //Definindo variaveis
    int a;

    //Imprimindo alguma coisa
    printf("Digite um valor para 'a': ");

    //Lendo o valor
    scanf("%d", &a);

    //Chama função que limpa a tela
    limpaTela();

    printf("O valor digitado foi %d \n Fim do Programa", a);

    //Retorno da função
    return 0;
}
