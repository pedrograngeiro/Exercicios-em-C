#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){


    //Variavel
    int a = 20;

    //Imprimir o valor de uma variavel
    printf("\nValor de a: %d", a);

    //Imprimir o endereço de uma variavel
    printf("\nEndereco de a: %d\n", &a);

    //VARIAVEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSIÇÕES DA MEMORIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSIÇÃO DA MEMÓRIA DA VARIÁVEL B
    ponteiro = &b;

    //Imprimir o endereço de uma variavel
    printf("\nEndereco de b: %d\n", b);

    //* pode ser lido como "CONTEÚDO APONTADO POR"
    *ponteiro = 40;

    //Imprimir o endereço de uma variavel
    printf("\nEndereco de b: %d\n", b);

    return 0;
}


