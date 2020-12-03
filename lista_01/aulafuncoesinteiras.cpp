#include <stdio.h>
#include <stdlib.h>

//Informando que a função existe
int retornaDez();
float retornaQuebrado();

int main(){

    //Definindo variáveis
    int a;

    //Passando o retorno de uma função para uma variavel
    a = retornaDez();

    //Imprindo valor de a
    printf("\n%d", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma função para uma variavel
    b = retornaQuebrado();

    //Imprindo valor de a
    printf("\n%f", b);

    //Imprimindo texto na tela
    printf("hi\n");

    return 0;
}

//Função que retorna 10
int retornaDez(){
    printf("\nOi galera! \n");
    int numero = 10;
    return numero;
}

//Retorne um quebrado
float retornaQuebrado(){
    return 5.5;
}
